note
	description: "Summary description for {TABLE_GENERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TABLE_GENERATOR

create
	make

feature

	table: ARRAY2[STRING]
	names: ARRAY[STRING]

	make(q_table: QUERY_TABLE)
		require
			q_table /= Void
		do
			table := q_table.data
			names := q_table.names
		end

feature
	generate: STRING
		local
			i: INTEGER
			j: INTEGER
		do
			Result := "<table class=%"qTable%"><tr>"
			from
				i := 1
			until
				i > names.count
			loop
				Result := Result + "<th>" + names.at (i) + "</th>"
				i := i + 1
			end
			Result := Result + "</tr>"

			from
				j := 1
			until
				j > table.height
			loop
				Result := Result + "<tr>"
				from
					i := 1
				until
					i > table.width
				loop
					Result := Result + "<td>" + table.item (j, i) + "</td>"
					i := i + 1
				end
				Result := Result + "</tr>"
				j := j+1
			end
			Result := Result + "</table>"
		end

	invariant
		--q_table_property: names.count = table.width
end
