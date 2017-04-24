note
	description: "Class for data classification when returning query from DataBase"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUERY_TABLE
create
	make_empty
feature --initialization
	make_empty
	do
		create names.make_empty
		create data.make_filled ("", 1, 1)
		header := Void
	end
feature
	set_data (a : ARRAY2[STRING])
	require
		a /= Void
	do
		data := a
	ensure
		data = a
	end

	set_names (a : ARRAY[STRING])
	require
		a /= Void
	do
		names := a
	ensure
		names = a
	end

	set_header (s : STRING)
	require
		s /= Void
	do
		header := s
	ensure
		header = s
	end
feature --attributes
	names : ARRAY[STRING]
	data : ARRAY2[STRING]
	header : STRING
end
