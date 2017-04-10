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
feature --attributes
	names : ARRAY[STRING]
	data : ARRAY2[STRING]
end
