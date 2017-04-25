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
		-- helpers
	rep: REPORT
	mesq: WSF_HTML_PAGE_RESPONSE
	table: TABLE_GENERATOR

feature
	execute(start_path: STRING; request: WSF_REQUEST; response: WSF_RESPONSE)
		local
			page: WSF_FILE_RESPONSE
		do
			--print(start_path + "%N")
			create mesq.make
			mesq.set_title ("Innopolis University annual report")
			mesq.add_style ("css/adminStyle.css", Void)
			mesq.set_body ("<form action=%"/administrator%"><input type=%"submit%" value=%"BACK%"></form>")
			create rep.make
			if start_path ~ "/administrator" then
				response.send (make_admin_page)
			else
				if start_path ~ "/publications" then
					show_publications (request)
				elseif start_path ~ "/courses_taught" then
					show_courses_taught (request)
				elseif start_path ~ "/students_supervised" then
					show_students_supervised (request)
				elseif start_path ~ "/submitted_reports" then
					show_submitted_reports (request)
				elseif start_path ~ "/common_info" then
					show_common_info (request)
				elseif start_path ~ "/all_submitted_reports" then
					show_all_submitted_reports (request)
				elseif start_path ~ "/research_collaborations" then
					show_research_collaborations (request)
				elseif start_path ~ "/erase_report" then
					erase_report (request)
				end

				response.send (mesq)

			end
		end

feature {NONE}
	--querys
	show_publications(r: WSF_REQUEST)
		do
			if attached r.form_parameter ("year") as year then
				if attached rep.publications (year.string_representation.to_integer_32) as t  then
					create table.make (t)
					mesq.set_body (mesq.body + table.generate)
				else
					error ("No such data")
				end
			else
				error ("Wrong parameter")
			end
		end

	show_courses_taught(r: WSF_REQUEST)
		do
			if attached r.form_parameter ("start_date") as start_date and attached r.form_parameter ("end_date") as end_date and false then
				if attached rep.courses_taught (start_date.string_representation, end_date.string_representation) as t  then
					create table.make (t)
					mesq.set_body (mesq.body + table.generate)
				else
					error ("No such data")
				end
			else

				error ("Wrong parameter")
			end
		end

	show_students_supervised(r: WSF_REQUEST)
		do
			if attached rep.students_supervised as t then
				create table.make (t)
				mesq.set_body (mesq.body + table.generate)
			else
				error("No such data")
			end
		end

	show_submitted_reports(r: WSF_REQUEST)
		do
			if attached r.form_parameter ("year") as year then
				if attached rep.submitted_reports (year.string_representation.to_integer) as t  then
					create table.make (t)
					mesq.set_body(mesq.body + table.generate)
				else
					error("No such data")
				end
			else
				error("Wrong parameter")
			end
		end

	show_common_info (r: WSF_REQUEST)
		do
			if attached r.form_parameter ("unitname") as unitname then
				if attached {ARRAYED_LIST [QUERY_TABLE]} rep.common_info (unitname.string_representation.substring (1, unitname.string_representation.index_of (':', 1)-1)) as list then
					across
						list as t
					loop
						create table.make (t.item)
						mesq.set_body (mesq.body + table.generate)
					end
				else
					error ("No such data")
				end
			else
				error ("Wrong parameter")
			end
		end

	show_all_submitted_reports (r: WSF_REQUEST)
		do
			if attached rep.all_submitted_reports as t then
				create table.make (t)
				mesq.set_body(mesq.body + table.generate)
			else
				error("No such data")
			end
		end

	show_research_collaborations (r: WSF_REQUEST)
		do
			if attached rep.research_collaborations as t then
				create table.make (t)
				mesq.set_body(mesq.body + table.generate)
			else
				error("No such data")
			end
		end

	erase_report (r: WSF_REQUEST)
		do
			if attached r.form_parameter ("unitname") as unitname then
				rep.delete_report (unitname.string_representation.substring (1, unitname.string_representation.index_of (':', 1)-1))
				mesq.set_body (mesq.body + "<h1>Information about the unit deleted successfully</h1>")
			else
				error ("Wrong parameter")
			end
		end

	error(text: STRING)
		do
			mesq.set_body (mesq.body + "%N<h1>"+text+"</h1>")
		end

	make_admin_page: WSF_HTML_PAGE_RESPONSE
		local
			m: WSF_HTML_PAGE_RESPONSE
			list: ARRAY2 [STRING]
			i: INTEGER
		do
			create m.make
			list := rep.list_of_units
			m.add_javascript_url ("js/managePanel.js")
			m.set_title ("Innopolis University annual report")
			m.set_body ("[
			<h1>Select query:</h1>
			<select id="query" required="true" onload="selectQuery()" onchange="selectQuery()">
				<option>Publications from given year</option>
				<option>Courses taught between period</option>
				<option>Number of students supervised</option>
				<option>Submitted reports from given year</option>
				<option>Common info of a unit</option>
				<option>All submitted reports</option>
				<option>Number of research collaboration</option>
				<option>Erase all information about the unit report</option>
			</select>

			<div id="forInput">
				<input type="number" name="year" required="true"><input type="submit">
			</div>
			]")

			m.set_body (m.body + "<div id=%"unitsListBlock%" hidden=%"true%">%N")
			m.set_body (m.body + "<select id=%"unitsList%" name=%"unitname%">%N")
			from
				i := 1
			until
				i > list.height
			loop
				m.set_body (m.body + "<option>" + list.item (i, 1) + ": " + list.item (i, 2) + "</option>%N")
				i := i + 1
			end
			m.set_body (m.body + "</select></div>")

			Result := m
		end
end
