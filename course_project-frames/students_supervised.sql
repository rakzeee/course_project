SELECT reports.nameOfUnit, students_supervised.studentName, students_supervised.work FROM students_supervised
INNER JOIN 
reports
	ON students_supervised.report_id = reports.id;