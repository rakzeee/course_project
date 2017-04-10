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
			if attached {WSF_VALUE} request.form_parameter ("unitname") as unitname and attached {WSF_VALUE} request.form_parameter ("headname") as headname and attached {WSF_VALUE} request.form_parameter ("startDate") as startdate and attached {WSF_VALUE} request.form_parameter ("endDate") as enddate then
				dbw.update_reports (unitname.string_representation, headname.string_representation, startdate.string_representation, enddate.string_representation)
				mesq.put_string (unitname.string_representation)
			end
			mesq.put_string ("123")
			response.send (mesq)
		end

		dbw: DB_WORKER
		once ("OBJECT") --if DataBase is already exists - just open it, else - create from file
			if (create {RAW_FILE}.make_with_name ("my_db")).exists then
				create Result.db_open
			else
				create Result.db_make
			end
		end
end
