SELECT reports.nameOfUnit, reports.nameOfHeadUnit, conference_publications.publication, reports.startOfRepPeriod FROM conference_publications
INNER JOIN 
reports  
	ON conference_publications.report_id = reports.id
WHERE report_id IN 
(SELECT id FROM reports WHERE startOfRepPeriod >= "