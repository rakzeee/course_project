note
	description: "Summary description for {ADMINISTRATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ADMINISTRATION

inherit
	WSF_STARTS_WITH_HANDLER

feature

	execute(start_path: STRING; request: WSF_REQUEST; response: WSF_RESPONSE)
		local
			mesq: WSF_HTML_PAGE_RESPONSE
			page: WSF_FILE_RESPONSE
			table: TABLE_GENERATOR
			rep: REPORT
		do
			--print(start_path + "%N")
			create mesq.make
			mesq.set_title ("Innopolis University annual report")
			mesq.add_style ("css/adminStyle.css", Void)
			create rep.make
			if start_path ~ "/administrator" then
				create page.make_html ("www/panel.html")
				response.send (page)
			elseif start_path ~ "/publications" then
				if attached request.form_parameter ("year") as year then
					if attached rep.publications (year.string_representation.to_integer_32) as t  then
						create table.make (t)
						mesq.set_body (table.generate)
					else
						mesq.set_body ("<h1>No such data</h1>")
					end
				else
					-- error
				end
			elseif start_path ~ "/courses_taught" then
				if attached request.form_parameter ("start_date") as start_date and attached request.form_parameter ("end_date") as end_date then
					if attached rep.courses_taught (start_date.string_representation, end_date.string_representation) as t  then
						create table.make (t)
						mesq.set_body (table.generate)
					else
						mesq.set_body ("<h1>No such data</h1>")
					end
				else
					-- error
				end
			elseif start_path ~ "/students_supervised" then
				if attached rep.students_supervised as t then
					create table.make (t)
					mesq.set_body (table.generate)
				else
					mesq.set_body ("<h1>No such data</h1>")
				end
			elseif start_path ~ "/submitted_reports" then
				if attached request.form_parameter ("year") as year then
					if attached rep.submitted_reports (year.string_representation.to_integer) as t  then
						create table.make (t)
						mesq.set_body(table.generate)
					else
						mesq.set_body ("<h1>No such data</h1>")
					end
				end
			end

			response.send (mesq)
		end
end
