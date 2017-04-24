note
	description: "Summary description for {REPORT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	REPORT

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do

		end

feature --features for creating a full report

	add_report(unit, head, start_date, end_date : STRING)
	require
		unit /= Void and head /= Void and start_date /= Void and end_date /= Void
	local
		query : STRING
	do
		query := "INSERT INTO reports (nameOfUnit, nameOfHeadUnit, startOfRepPeriod, endOfRepPeriod) VALUES ("
		query := query + "%""+ unit + "%", %"" + head + "%", %"" + start_date + "%", %"" + end_date + "%");"
		dbw.execute_insertion(query)
	end

	add_course_taught(report_id : INTEGER; name, semester, level, number_of_stud : STRING)
	require
		report_id > 0 and name /= Void and semester /= Void and level /= Void and number_of_stud /= Void
	local
		query : STRING
	do
		query := "INSERT INTO courses_taught (report_id, name, semester, level, appNumOfStudents) VALUES (" + report_id.out
		query := query + ", %"" + name + "%", %"" + semester + "%", %"" + level+ "%", " + number_of_stud + ");"
		dbw.execute_insertion (query)
	end

	add_examination(report_id : INTEGER; name, semester, kind_of_exam, number_of_stud : STRING)
	require
		report_id > 0 and name /= Void and semester /= Void and kind_of_exam /= Void and number_of_stud /= Void
	local
		query : STRING
	do
		query := "INSERT INTO examinations (report_id, name, semester, kindOfExam, appNumOfStudents) VALUES (" + report_id.out
		query := query + ", %"" + name + "%", %"" + semester + "%", %"" + kind_of_exam + "%", " + number_of_stud + ");"
		dbw.execute_insertion (query)
	end

	add_stud_supervised(report_id : INTEGER; stud_name, work : STRING)
	require
		report_id > 0 and stud_name /= Void and work /= Void
	local
		query : STRING
	do
		query := "INSERT INTO students_supervised (report_id, studentName, work) VALUES (" + report_id.out
		query := query + ", %"" + stud_name + "%", %"" + work + "%");"
		dbw.execute_insertion (query)
	end

	add_completed_stud_report(report_id : INTEGER; stud_name, rep_title, pub_plan : STRING)
	require
		report_id > 0 and stud_name /= Void and rep_title /=Void and pub_plan /= Void
	local
		query : STRING
	do
		query := "INSERT INTO comp_student_reports (report_id, studentName, reportTitle, publicationPlan) VALUES (" + report_id.out
		query := query + ", %"" + stud_name + "%", %"" + rep_title + "%", %"" + pub_plan + "%");"
		dbw.execute_insertion (query)
	end

	add_completed_phd_these(report_id : INTEGER; stud_name, deg, name_of_sup, com_members, dg_instit, title_of_dis : STRING)
	require
		report_id > 0 and stud_name /= Void and deg /= Void and name_of_sup /= Void and com_members /= Void
			and dg_instit /= Void and title_of_dis /= Void
	local
		query : STRING
	do
		query := "INSERT INTO comp_phd_theses (report_id, studentName, degree, nameOfSupervisor, commiteeMembers, degreeGrantingInst, titleOfDissertation) VALUES (" + report_id.out
		query := query + ", %"" + stud_name + "%", %"" + deg + "%", %"" + name_of_sup + "%", %"" + com_members + "%", %""
		query := query + dg_instit + "%", %"" + title_of_dis + "%");"
		dbw.execute_insertion (query)
	end

	add_grant(report_id : INTEGER; title, grant_ag, period, amount : STRING)
	require
		report_id > 0 and title /= Void and grant_ag /= Void and period /= Void and amount /= Void
	local
		query : STRING
	do

		query := "INSERT INTO grants (report_id, titleOfProject, grantingAgency, period, amount) VALUES (" + report_id.out
		query := query + ", %"" + title + "%", %"" + grant_ag + "%", %"" + period + "%", %"" + amount + "%");"
		dbw.execute_insertion (query)
	end

	add_research_project(report_id : INTEGER; title, UIpers, ext_pers, start_date, end_date, fin : STRING)
	require
		report_id > 0 and title /= Void and UIpers /= Void and ext_pers /= Void and start_date /= Void
			and end_date /= Void and fin /= Void
	local
		query : STRING
	do
		query := "INSERT INTO research_projects (report_id, titleOfProject, UIPersonnelInvolved, externalPersonnelInvolved, startDate, endDate, financing) VALUES (" + report_id.out
		query := query + ", %"" + title + "%", %"" + UIpers + "%", %"" + ext_pers + "%", %"" + start_date + "%", %""
		query := query + end_date + "%", %"" + fin + "%");"
		dbw.execute_insertion (query)
	end

	add_research_col(report_id : INTEGER; country, inst_name, contacts, col_nature : STRING)
	require
		report_id > 0 and country /= Void and inst_name /= Void and contacts /= Void and col_nature /= Void
	local
		query : STRING
	do
		query := "INSERT INTO research_collaborations (report_id, country, institutionName, contacts, collaborationNature) VALUES (" + report_id.out
		query := query + ", %"" + country + "%", %"" + inst_name + "%", %"" + contacts + "%", %"" + col_nature + "%");"
		dbw.execute_insertion (query)
	end

	add_conference_publications(report_id : INTEGER; publ : STRING)
	require
		report_id > 0 and publ /= Void
	local
		query : STRING
	do
		query := "INSERT INTO conference_publications (report_id, publication) VALUES (" + report_id.out + ", %"" + publ + "%");"

		dbw.execute_insertion (query)
	end

	add_journal_publications(report_id : INTEGER; publ : STRING)
	require
		report_id > 0 and publ /= Void
	local
		query : STRING
	do
		query := "INSERT INTO journal_publications (report_id, publication) VALUES (" + report_id.out + ", %"" + publ + "%");"
		dbw.execute_insertion (query)
	end

	add_patent(report_id : INTEGER; patent, country : STRING)
	require
		report_id > 0 and patent /= Void and country /= Void
	local
		query : STRING
	do
		query := "INSTER INTO patents (report_id, patent, country) VALUES (" + report_id.out + ", %"" + patent + "%", %"" + country + "%");"
	end

	add_ip_licensing(report_id : INTEGER; license : STRING)
	require
		report_id > 0 and license /= Void
	local
		query : STRING
	do
		query := "INSERT INTO ip_licensing (report_id, license) VALUES (" + report_id.out + ", %"" + license + "%");"
	end

	add_best_paper_award(report_id : INTEGER; authors, article, awardingConOrJournal, award, date : STRING)
	require
		report_id > 0 and authors /= Void and article /= Void and awardingConOrJournal /= Void and award /= Void and date /= Void
	local
		query : STRING
	do
		query := "INSERT INTO best_paper_awards (report_id, authors, article, awardingConOrJournal, award, date) VALUES (" + report_id.out
		query := query + ", %"" + authors + "%", %"" + article + "%", %"" + awardingConOrJournal + "%", %"" + award + "%", %"" + date + "%");"
	end

	add_membership(report_id : INTEGER; nameOfMember, date : STRING)
	require
		report_id > 0 and nameOfMember /= Void and date /= Void
	local
		query : STRING
	do
		query := "INSERT INTO memberships (report_id, nameOfMember, date) VALUES (" + report_id.out + ", %"" + nameOfMember + "%", %"" + date + "%");"
	end

	add_prize(report_id : INTEGER; recipient, nameOfPrize, grantingInst, date : STRING)
	require
		report_id >0 and recipient /= Void and nameOfPrize /= Void and grantingInst /= Void and date /= Void
	local
		query : STRING
	do
		query := "INSERT INTO prizes (report_id, recipient, nameOfPrize, grantingInst, date) VALUES (" + report_id.out + ", %"" + recipient
		query := query + "%", %"" + recipient + "%", %"" + nameOfPrize + "%", %"" + grantingInst + "%", %"" + date + "%");"
	end

	add_ind_collaboration(report_id : INTEGER; company, nature : STRING)
	require
		report_id > 0 and company /= Void and nature /= Void
	local
		query : STRING
	do
		query := "INSERT INTO  industry_collaborations (report_id, company, nature_of_collaboration) VALUES (" + report_id.out + ", %"" + company
		query := query + "%", %"" + nature + "%");"
	end

	add_other_info (report_id : INTEGER; otherInfo : STRING)
	require
		report_id >0 and otherInfo /= Void
	local
		query : STRING
	do
		query := "INSERT INTO other_info (report_id, otherInfo) VALUES (" + report_id.out + ", %"" + otherInfo + "%");"
	end

	current_report_id : INTEGER
	local
		a : ARRAY2[STRING]
	do
		a := dbw.execute_selection ("SELECT MAX(id) FROM reports;")
		if a = Void then
			Result := 1
		else
			Result := a.at (1).to_integer + 1
		end
	ensure
		Result > 0
	end

	table_fields(table : STRING; n : INTEGER) : ARRAY[STRING]
	require
		n > 0 and table /= Void
	local
		i, j : INTEGER
		t_info : ARRAY2[STRING]
	do
		create Result.make_empty
		t_info := dbw.execute_selection ("pragma table_info(" + table + ");")
		j := 1
		from
			i := n
		until
			i > t_info.height
		loop
			Result.force (t_info.item (i, 2), j)
			i := i + 1
			j := j + 1
		end
	ensure
		not Result.is_empty
	end
feature -- mandatory queries of the web application

	all_submitted_reports : QUERY_TABLE
	local
		query : STRING
	do
		Result.make_empty
		Result.set_header ("All submitted reports")
		Result.names.grow (5)
		Result.names.put ("Number", 1)
		Result.names.put ("Name Of unit", 2)
		Result.names.put ("Name of head of unit", 3)
		Result.names.put ("Start of reporting period", 4)
		Result.names.put ("End of reporting period", 5)
		query := "SELECT * FROM reports;"
		if (dbw.execute_selection (query) /= Void) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
	end

	publications(year : INTEGER) : QUERY_TABLE
	local
		query : STRING
		file : PLAIN_TEXT_FILE
	do
		create Result.make_empty
		Result.set_header ("All publications of the university in a given year")
		Result.names.grow (4)
		Result.names.put ("Name Of unit", 1)
		Result.names.put ("Name of head of unit", 2)
		Result.names.put ("Publication", 3)
		Result.names.put ("Start of reporting period", 4)
		create file.make_open_read ("jour_publications.sql")
		file.read_stream (file.count)
		query := file.last_string
		file.close
		query := query + year.out + "-01-01%" AND startOfRepPeriod < %"" + (year+1).out + "-01-01%") UNION ALL "
		create file.make_open_read ("conf_publications.sql")
		file.read_stream (file.count)
		query := query + file.last_string
		file.close
		query := query + year.out + "-01-01%" AND startOfRepPeriod < %"" + (year+1).out + "-01-01%");"
		if (dbw.execute_selection (query) /= Void) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
	end

	list_of_units : ARRAY2[STRING]
	local
		query : STRING
	do
		query := "SELECT id, nameOfUnit FROM reports;"
		Result := dbw.execute_selection (query)
	end

	common_info (id : STRING) : ARRAYED_LIST[QUERY_TABLE]
	require
		unit /= Void
	local
		a : QUERY_TABLE
		res : ARRAY2[STRING]
		query : STRING
		rep_id : STRING
	do
		create Result.make (0)
		rep_id := id

		create a.make_empty
		a.set_header ("Common info about given unit and its report:%N")
		a.set_names (table_fields("reports", 2))
		query := "SELECT nameOfUnit, nameOfHeadUnit, startOfRepPeriod, endOfRepPeriod FROM reports WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end


		create a.make_empty
		a.set_header ("Courses taught by members of unit")
		a.set_names (table_fields("courses_taught", 3))
		query := "SELECT name, semester, level, appNumOfStudents FROM courses_taught WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Examinations administered by members of unit")
		a.set_names (table_fields("examinations", 3))
		query := "SELECT name, semester, kindOfExam, appNumOfStudents FROM examinations WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Students supervised by unit")
		a.set_names (table_fields("students_supervised", 3))
		query := "SELECT studentName, work FROM students_supervised WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Completed student reports")
		a.set_names (table_fields("comp_student_reports", 3))
		query := "SELECT studentName, reportTitle, publicationPlan FROM comp_student_reports WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Completed PHD theses")
		a.set_names (table_fields("comp_phd_theses", 3))
		query := "SELECT studentName, degree, nameOfSupervisor, commiteeMembers, degreeGrantingInst, titleOfDissertation FROM comp_phd_theses WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Grants")
		a.set_names (table_fields("grants", 3))
		query := "SELECT titleOfProject, grantingAgency, period, amount FROM grants WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Research projects:")
		a.set_names (table_fields("research_projects", 3))
		query := "SELECT titleOfProject, UIPersonnelInvolved, externalPersonnelInvolved, startDate, endDate, financing FROM research_projects WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Research collaborations")
		a.set_names (table_fields("research_collaborations", 3))
		query := "SELECT country, institutionName, contacts, collaborationNature FROM research_collaborations WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Conference publications")
		a.set_names (table_fields("conference_publications", 3))
		query := "SELECT publication FROM conference_publications WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Journal publications")
		a.set_names (table_fields("journal_publications", 3))
		query := "SELECT publication FROM journal_publications WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Patents")
		a.set_names (table_fields("patents", 3))
		query := "SELECT patent, country FROM patents WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("IP licensing (software or others)")
		a.set_names (table_fields("ip_licensing", 3))
		query := "SELECT license FROM ip_licensing WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Best paper awards")
		a.set_names (table_fields("best_paper_awards", 3))
		query := "SELECT authors, article, awardingConOrJournal, award, date FROM best_paper_awards WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Memberships")
		a.set_names (table_fields("memberships", 3))
		query := "SELECT nameOfMember, date FROM memberships WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Prizes")
		a.set_names (table_fields("prizes", 3))
		query := "SELECT recipient, nameOfPrize, grantingInst, date FROM prizes WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Industry collaborations")
		a.set_names (table_fields("industry_collaborations", 3))
		query := "SELECT company, nature_of_collaboration FROM industry_collaborations WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end

		create a.make_empty
		a.set_header ("Other info")
		a.set_names (table_fields("other_info", 3))
		query := "SELECT otherInfo FROM other_info WHERE report_id = " + rep_id + ";"
		res := dbw.execute_selection (query)
		if (res /= Void) then
			a.set_data (res)
			Result.force (a)
		end
	end

	courses_taught(start_date, end_date : STRING) : QUERY_TABLE
	require
		start_date /= Void and end_date /= Void and end_date.is_greater (start_date)
	local
		query : STRING
		file : PLAIN_TEXT_FILE
	do
		create Result.make_empty
		Result.set_header ("Courses taught by a Laboratory between initial and final date")
		Result.names.grow (6)
		Result.names.put ("Name Of unit", 1)
		Result.names.put ("Name of head of unit", 2)
		Result.names.put ("Course", 3)
		Result.names.put ("Semester", 4)
		Result.names.put ("level", 5)
		Result.names.put ("Approximate number of students", 6)
		create file.make_open_read ("courses_taught.sql")
		file.read_stream (file.count)
		query := file.last_string
		file.close
		query := query + end_date + "%" AND endOfRepPeriod >= %""+ start_date + "%");"
		if (dbw.execute_selection (query) /= Void) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
	end

	students_supervised : QUERY_TABLE
	local
		table, temp : ARRAY2[STRING]
		names : ARRAY[STRING]
		i, j : INTEGER
	do
		j := 1
		Result.make_empty
		names.force ("Unit name", 1)
		names.force ("Number of supervised students", 2)
		Result.set_names (names)
		from
			i := 1
		until
			i > current_report_id - 1
		loop
			if (dbw.execute_selection ("SELECT id FROM students_supervised WHERE report_id = " + i.out + ";") /= Void) then
				temp := dbw.execute_selection ("SELECT nameOfUnit FROM reports WHERE id = " + i.out + ";")
				table.force (temp.item (1, 1), j, 1)
				temp := dbw.execute_selection ("SELECT COUNT(*) FROM students_supervised WHERE report_id = "+  i.out + ";")
				table.force (temp.item (1, 1), j, 2)
				i := i + 1
				j := j + 1
			end
			table.force ("Total", i, 1)
			temp := dbw.execute_selection ("SELECT COUNT(*) FROM students_supervised;")
			table.force (temp.item (1, 1), i, 2)
		end
	end

	research_collaborations : QUERY_TABLE
	local
		query : STRING
		table, temp : ARRAY2[STRING]
		names : ARRAY[STRING]
		i, j : INTEGER
	do
		j := 1
		Result.make_empty
		names.force ("Unit name", 1)
		names.force ("Number of research collaborations", 2)
		Result.set_names (names)
		from
			i := 1
		until
			i > current_report_id - 1
		loop
			if (dbw.execute_selection ("SELECT id FROM research_collaborations WHERE report_id = " + i.out + ";") /= Void) then
				temp := dbw.execute_selection ("SELECT nameOfUnit FROM reports WHERE id = " + i.out + ";")
				table.force (temp.item (1, 1), j, 1)
				temp := dbw.execute_selection ("SELECT COUNT(*) FROM research_collaborations WHERE report_id = "+  i.out + ";")
				table.force (temp.item (1, 1), j, 2)
				i := i + 1
				j := j + 1
			end
			table.force ("Total", i, 1)
			temp := dbw.execute_selection ("SELECT COUNT(*) FROM research collaborations;")
			table.force (temp.item (1, 1), i, 2)
		end
	end

	submitted_reports(year : INTEGER) : QUERY_TABLE
	local
		query : STRING
	do
		create Result.make_empty
		Result.set_header ("Submitted reports in a given year")
		Result.names.grow (3)
		Result.names.put ("Name Of unit", 1)
		Result.names.put ("Name of head of unit", 2)
		Result.names.put ("Start of report period", 3)
		query := "SELECT reports.nameOfUnit, reports.nameOfHeadUnit, reports.startOfRepPeriod from reports WHERE startOfRepPeriod <= %"" + (year+1).out + "-01-01%" AND endOfRepPeriod >= %""+ year.out +"-01-01%";"
		if (dbw.execute_selection (query) /= Void) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
	end

	delete_report(name_of_unit : STRING)
	require
		name_of_unit /= Void
	local
		temp : ARRAY2[STRING]
		report_id : STRING
	do
		temp := dbw.execute_selection ("SELECT id FROM reports WHERE nameOfUnit = %"" + name_of_unit + "%";")
		report_id := temp.item (1, 1)
		dbw.execute_deletion ("DELETE FROM reports WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM courses_taught WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM examinations WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM students_supervised WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM comp_student_reports WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM comp_phd_theses WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM grants WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM research_projects WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM research_collaborations WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM conference_publications WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM journal_publications WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM patents WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM ip_licensing WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM best_paper_awards WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM memberships WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM prizes WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM industry_collaborations WHERE report_id = " + report_id + ";")
		dbw.execute_deletion ("DELETE FROM other_info WHERE report_id = " + report_id + ";")
	end

feature -- if no DataBase created - create, else - open
	dbw: DB_WORKER
		once ("OBJECT") --if DataBase is already exists - just open it, else - create from file
			if (create {RAW_FILE}.make_with_name ("my_db")).exists then
				create Result.db_open
			else
				create Result.db_make
			end
		end
end
