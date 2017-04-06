note
	description: "Summary description for {FORM_HANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FORM_HANDLER
inherit
	WSF_STARTS_WITH_HANDLER

feature

	execute(start_path: STRING; request: WSF_REQUEST; response: WSF_RESPONSE)
		local
			mesq: WSF_PAGE_RESPONSE
			page: WSF_FILE_RESPONSE
		do
			create mesq.make
			create page.make_html ("succes.html")
			across
				request.form_parameters as param
			loop
				io.put_string (param.item.string_representation)
				io.new_line
			end
--			if attached {WSF_VALUE} request.form_parameter ("unitname") as unitname then
--				mesq.put_string (unitname.string_representation)
--				io.put_string(unitname.string_representation)
--			end
			mesq.put_string ("123")
			response.send (mesq)
		end
end
