note
	description: "Class that works with Data Base for Web Application for annual reports"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DB_WORKER
create
	db_open,
	db_make
feature	--initialization
	db_open
	do
		create db.make_open_read_write (name_db)
	end

	db_make
	local
		file : PLAIN_TEXT_FILE
		s : STRING
	do
		create file.make_open_read ("db_for_course_project.sql")
		create db.make_create_read_write (name_db)
		file.read_stream (file.count)
		s := file.last_string
		file.close
		execute_insertion(s)
	end

feature --main features

	execute_insertion(query : STRING)
	require
		not_empty: query /= Void
		open: not db.is_closed
	local
		db_insert_statement : SQLITE_INSERT_STATEMENT
	do
		create db_insert_statement.make (query, db)
		db_insert_statement.execute
	end

	execute_selection(query : STRING) : ARRAY2[STRING]
	require
		not_empty: query /= Void
		open: not db.is_closed
	local
		db_query_statement : SQLITE_QUERY_STATEMENT
		cursor : SQLITE_STATEMENT_ITERATION_CURSOR
		i, j : INTEGER
		temp : ARRAY2[STRING]
		j1 : NATURAL_32
		s : STRING

	do
		create db_query_statement.make (query, db)
		create temp.make_filled ("", 1, 1)
		cursor := db_query_statement.execute_new
		cursor.start
		Result := Void
		if cursor.after then

		else
			from
				i := 1
			until
				cursor.after
			loop
				from
					j := 1
				until
					j > cursor.item.count.as_integer_16
				loop
					temp.resize_with_default ("", i,j)
					temp.put (cursor.item.string_value (j.as_natural_32), i, j)
					j := j + 1
				end
				cursor.forth
				i := i + 1
			end
			Result := temp
		end
	end

	execute_selection_full_table(table : STRING): ARRAY2[STRING]
	require
		table_exists: table /= Void
		open: not db.is_closed
	local
		db_query_statement : SQLITE_QUERY_STATEMENT
		query : STRING
		cursor : SQLITE_STATEMENT_ITERATION_CURSOR
		i, j : INTEGER
		temp : ARRAY2[STRING]
		j1 : NATURAL_32
		s : STRING

	do
		create query.make_from_string ("SELECT * FROM " + table + ";")
		create db_query_statement.make (query, db)
		create temp.make_filled ("", 1, 1)
		cursor := db_query_statement.execute_new
		cursor.start
		Result := Void
		if cursor.after then

		else
			from
				i := 1
			until
				cursor.after
			loop
				from
					j := 1
				until
					j > cursor.item.count.as_integer_16
				loop
					temp.resize_with_default ("", i,j)
					temp.put (cursor.item.string_value (j.as_natural_32), i, j)
					j := j + 1
				end
				cursor.forth
				i := i + 1
			end
			Result := temp
		end
	end

	execute_selection_one_column(table, column : STRING) : ARRAY2[STRING]
	require
		table_is_not_empty: table /= Void
		column_is_not_empty: column /= Void
		open: not db.is_closed
	local
		db_query_statement : SQLITE_QUERY_STATEMENT
		query : STRING
		cursor : SQLITE_STATEMENT_ITERATION_CURSOR
		i, j : INTEGER
		temp : ARRAY2[STRING]
		j1 : NATURAL_32
		s : STRING
	do
		query := "SELECT " + column + " FROM " + table + ";"
		create db_query_statement.make (query, db)
		create temp.make_filled ("", 1, 1)
		cursor := db_query_statement.execute_new
		cursor.start
		Result := Void
		if cursor.after then

		else
			from
				i := 1
			until
				cursor.after
			loop
				from
					j := 1
				until
					j > cursor.item.count.as_integer_16
				loop
					temp.resize_with_default ("", i,j)
					temp.put (cursor.item.string_value (j.as_natural_32), i, j)
					j := j + 1
				end
				cursor.forth
				i := i + 1
			end
			Result := temp
		end
	debug
		end
	end

	print_array(array : ARRAY2[STRING]) : STRING
	require
		array /= Void
	local
		i, j : INTEGER
	do

		create Result.make_empty
		from
			i := 1
		until
			i > array.height
		loop
			from
				j := 1
			until
				j > array.width
			loop
				Result.append (array.item (i, j) + " ")
				j := j + 1
			end
			Result.append ("%N")
			i := i + 1
		end
	end
feature -- attributes
	db : SQLITE_DATABASE
	frozen name_db : STRING = "my_db"

end
