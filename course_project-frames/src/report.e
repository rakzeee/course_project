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
		query := "INSERT INTO comp_phd_theses (report_id, studentName, degree, nameOfSupervisor, commiteeMembers, degreeGrantingInst) VALUES (" + report_id.out
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

feature -- mandatory queries of the web application

	reports : QUERY_TABLE
	local
		query : STRING
	do
		Result.make_empty
		Result.names.grow (5)
		Result.names.put ("Number", 1)
		Result.names.put ("Name Of unit", 2)
		Result.names.put ("Name of head of unit", 3)
		Result.names.put ("Start of reporting period", 4)
		Result.names.put ("End of reporting period", 5)
		query := "SELECT * FROM reports;"
		if (not (dbw.execute_selection (query) = Void)) then
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
		if (not (dbw.execute_selection (query) = Void)) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
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
		if (not (dbw.execute_selection (query) = Void)) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
	end

	students_supervised : QUERY_TABLE
	local
		query : STRING
		file : PLAIN_TEXT_FILE
	do
		create Result.make_empty
		Result.names.grow (3)
		Result.names.put ("Name Of unit", 1)
		Result.names.put ("Student name", 2)
		Result.names.put ("Work", 3)
		create file.make_open_read ("students_supervised.sql")
		file.read_stream (file.count)
		query := file.last_string
		file.close
		if (not (dbw.execute_selection (query) = Void)) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
	end

	submitted_reports(year : INTEGER) : QUERY_TABLE
	local
		query : STRING
		file : PLAIN_TEXT_FILE
	do
		create Result.make_empty
		Result.names.grow (3)
		Result.names.put ("Name Of unit", 1)
		Result.names.put ("Name of head of unit", 2)
		Result.names.put ("Start of report period", 3)
		query := "SELECT reports.nameOfUnit, reports.nameOfHeadUnit, reports.startOfRepPeriod from reports WHERE startOfRepPeriod <= %"" + (year+1).out + "-01-01%" AND endOfRepPeriod >= %""+ year.out +"-01-01%";"
		if (not (dbw.execute_selection (query) = Void)) then
			Result.set_data (dbw.execute_selection(query))
		else
			Result := Void
		end
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
