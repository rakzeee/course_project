SELECT reports.nameOfUnit, reports.nameOfHeadUnit, courses_taught.name, courses_taught.semester, courses_taught.level, courses_taught.appNumOfStudents FROM courses_taught
INNER JOIN 
reports
	ON courses_taught.report_id = reports.id
WHERE report_id IN 
(SELECT id FROM reports WHERE startOfRepPeriod <=  "