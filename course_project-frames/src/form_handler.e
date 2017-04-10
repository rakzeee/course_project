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

	report: REPORT

	execute(start_path: STRING; request: WSF_REQUEST; response: WSF_RESPONSE)
		local
			mesq: WSF_PAGE_RESPONSE
			page: WSF_FILE_RESPONSE
			report_id: INTEGER
		do
			create mesq.make
			create page.make_html ("succes.html")
			create report.make

--			if attached {WSF_VALUE} request.form_parameter ("unitname") as unitname then
--				mesq.put_string (unitname.string_representation)
--				io.put_string(unitname.string_representation)
--			end
			report_id := report.current_report_id
			save_reports (request)
			save_courses_taught (request, report_id)
			save_examinations (request, report_id)
			save_students_supervised (request, report_id)
			save_comp_student_reports (request, report_id)
			save_comp_phd_theses (request, report_id)
			save_grants (request, report_id)
			save_research_projects (request, report_id)
			save_research_collaborations (request, report_id)
			save_conference_publications (request, report_id)
			save_journal_publications (request, report_id)

			mesq.put_string ("123")
			response.send (mesq)
		end

	save_reports(r: WSF_REQUEST)
		local
			name_of_unit: STRING
			name_of_head: STRING
			start_date: STRING
			end_date: STRING
		do
			if attached r.form_parameter ("unitname") as a
						and attached r.form_parameter ("headname") as b
						and attached r.form_parameter ("startDate") as c
						and attached r.form_parameter ("endDate") as d then
				name_of_unit := a.string_representation
				name_of_head := b.string_representation
				start_date := c.string_representation
				end_date := d.string_representation

				if name_of_unit.is_empty or name_of_head.is_empty or start_date.is_empty or end_date.is_empty then
					error("reports: empty field")
				else
					report.add_report (name_of_unit, name_of_head, start_date, end_date)
				end
			else
				error("reports: miss field")
			end
		end

	save_courses_taught(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			name: STRING
			semester: STRING
			level: STRING
			num_of_students: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("nameCourses[" + i.out + "]")
			loop
				if attached r.form_parameter ("nameCourses[" + i.out + "]") as a
						and attached r.form_parameter ("semesterCourses[" + i.out + "]") as b
						and attached r.form_parameter ("levelCourses[" + i.out + "]") as c
						and attached r.form_parameter ("numberCourses[" + i.out + "]") as d then
					name := a.string_representation
					semester := b.string_representation
					level := c.string_representation
					num_of_students := d.string_representation

					if name.is_empty or semester.is_empty or level.is_empty or num_of_students.is_empty then
						error("courses_taught: empty field")
					else
						report.add_course_taught (id, name, semester, level, num_of_students)
					end
				else
					error("courses_taught: miss field")
				end
			end
		end

	save_examinations(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			name: STRING
			semester: STRING
			kind_of_exam: STRING
			num_of_students: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("nameExamination[" + i.out + "]")
			loop
				if attached r.form_parameter ("nameExamination[" + i.out + "]") as a
						and attached r.form_parameter ("semesterExamination[" + i.out + "]") as b
						and attached r.form_parameter ("examExamination[" + i.out + "]") as c
						and attached r.form_parameter ("numberExamination[" + i.out + "]") as d then
					name := a.string_representation
					semester := b.string_representation
					kind_of_exam := c.string_representation
					num_of_students := d.string_representation

					if name.is_empty or semester.is_empty or kind_of_exam.is_empty or num_of_students.is_empty then
						error("examinations: empty field")
					else
						report.add_examination (id, name, semester, kind_of_exam, num_of_students)
					end
				else
					error("examinations: miss field")
				end
			end
		end

	save_students_supervised(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			student_name: STRING
			work: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("studentNameSW[" + i.out + "]")
			loop
				if attached r.form_parameter ("studentNameSW[" + i.out + "]") as a
						and attached r.form_parameter ("workSW[" + i.out + "]") as b then
					student_name := a.string_representation
					work := b.string_representation

					if student_name.is_empty or work.is_empty then
						error("student_supervised: empty field")
					else
						report.add_stud_supervised (id, student_name, work)
					end
				else
					error("students_supervised: miss field")
				end
			end
		end

	save_comp_student_reports(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			student_name: STRING
			report_title: STRING
			publication_plan: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("studentNameSR[" + i.out + "]")
			loop
				if attached r.form_parameter ("studentNameSR[" + i.out + "]") as a
						and attached r.form_parameter ("titleSR[" + i.out + "]") as b
						and attached r.form_parameter ("planSR[" + i.out + "]") as c then
					student_name := a.string_representation
					report_title := b.string_representation
					publication_plan := c.string_representation

					if student_name.is_empty or report_title.is_empty then
						error("comp_student+reports: empty field")
					else
						report.add_completed_stud_report (id, student_name, report_title, publication_plan)
					end
				else
					error("comp_student_reports: miss field")
				end
			end
		end

	save_comp_phd_theses(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			student_name: STRING
			degree: STRING
			name_of_supervisor: STRING
			commitee_members: STRING
			degree_granting_inst: STRING
			title_of_dissertation: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("studentNamePHD[" + i.out + "]")
			loop
				if attached r.form_parameter ("studentNamePHD[" + i.out + "]") as a
						and attached r.form_parameter ("degreePHD[" + i.out + "]") as b
						and attached r.form_parameter ("supervisorNamePHD[" + i.out + "]") as c
						and attached r.form_parameter ("committeeMembersPHD[" + i.out + "]") as d
						and attached r.form_parameter ("institutiuonPHD[" + i.out + "]") as e
						and attached r.form_parameter ("titlePHD[" + i.out + "]") as f then
					student_name := a.string_representation
					degree := b.string_representation
					name_of_supervisor := c.string_representation
					commitee_members := d.string_representation
					degree_granting_inst := e.string_representation
					title_of_dissertation := f.string_representation

					if student_name.is_empty or degree.is_empty or name_of_supervisor.is_empty or commitee_members.is_empty or degree_granting_inst.is_empty or title_of_dissertation.is_empty then
						error("comp_phd_these: empty field")
					else
						report.add_completed_phd_these (id, student_name, degree, name_of_supervisor, commitee_members, degree_granting_inst, title_of_dissertation)
					end

				else
					error("comp_phd_theses: miss field")
				end
			end
		end

	save_grants(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			title_of_project: STRING
			granting_agency: STRING
			period: STRING
			amount: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("titleGrants[" + i.out + "]")
			loop
				if attached r.form_parameter ("titleGrants[" + i.out + "]") as a
						and attached r.form_parameter ("grantingAgencyGrants[" + i.out + "]") as b
						and attached r.form_parameter ("periodGrants[" + i.out + "]") as c
						and attached r.form_parameter ("amountGrants[" + i.out + "]") as d then
					title_of_project := a.string_representation
					granting_agency := b.string_representation
					period := c.string_representation
					amount := d.string_representation

					if title_of_project.is_empty or granting_agency.is_empty or period.is_empty or amount.is_empty then
						error("grants: empty field")
					else
						report.add_grant (id, title_of_project, granting_agency, period, amount)
					end
				else
					error("grants: miss field")
				end
			end
		end

	save_research_projects(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			title: STRING
			ui_personal: STRING
			external_personal: STRING
			start_date: STRING
			end_date: STRING
			financing: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("titleRP[" + i.out + "]")
			loop
				if attached  r.form_parameter ("titleRP[" + i.out + "]") as a
						and attached r.form_parameter ("universityPersonnelRP[" + i.out + "]") as b
						and attached r.form_parameter ("externalPersonnelRP[" + i.out + "]") as c
						and attached r.form_parameter ("startDateRP[" + i.out + "]") as d
						and attached r.form_parameter ("endDateRP[" + i.out + "]") as e
						and attached r.form_parameter ("financingRP[" + i.out + "]") as f then
					title := a.string_representation
					ui_personal := b.string_representation
					external_personal := c.string_representation
					start_date := d.string_representation
					end_date := e.string_representation
					financing := f.string_representation

					if title.is_empty or ui_personal.is_empty or start_date.is_empty or end_date.is_empty or financing.is_empty then
						error("research_projects: empty field")
					else
						report.add_research_project (id, title, ui_personal, external_personal, start_date, end_date, financing)
					end
				else
					error("research_projects: miss field")
				end
			end
		end

	save_research_collaborations(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			country: STRING
			institution_name: STRING
			contacts: STRING
			collaboration_nature: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("countryRC[" + i.out + "]")
			loop
				if attached r.form_parameter ("countryRC[" + i.out + "]") as a
						and attached r.form_parameter ("institutionNameRC[" + i.out + "]") as b
						and attached r.form_parameter ("contactsRC[" + i.out + "]") as c
						and attached r.form_parameter ("collaborationNatureRC[" + i.out + "]") as d then
					country	:= a.string_representation
					institution_name := b.string_representation
					contacts := c.string_representation
					collaboration_nature := d.string_representation

					if country.is_empty or institution_name.is_empty or contacts.is_empty or collaboration_nature.is_empty then
						error("research_collaborations: empty field")
					else
						report.add_research_col (id, country, institution_name, contacts, collaboration_nature)
					end
				else
					error("research_collaboration: miss field")
				end
			end
		end

	save_conference_publications(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			publication: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("conferencePublication[" + i.out + "]")
			loop
				if attached r.form_parameter ("conferencePublication[" + i.out + "]") as a then
					publication := a.string_representation

					if publication.is_empty then
						error("conference_publication: empty field")
					else
						report.add_conference_publications (id, publication)
					end
				else
					error("conference_publications: miss field")
				end
			end
		end

	save_journal_publications(r: WSF_REQUEST; id: INTEGER)
		require
			valid_id: id >= 0
		local
			publication: STRING
			i: INTEGER
		do
			from
				i := 0
			until
				not attached r.form_parameter ("journalPublication[" + i.out + "]")
			loop
				if attached r.form_parameter ("journalPublication[" + i.out + "]") as a then
					publication := a.string_representation

					if publication.is_empty then
						error("journal_publication: empty field")
					else
						report.add_journal_publications (id, publication)
					end
				else
					error("journal_publications: miss field")
				end
			end
		end

	error(e: STRING)
		do
			print(e)
		end
end
