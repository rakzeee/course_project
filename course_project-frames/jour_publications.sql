SELECT reports.nameOfUnit, reports.nameOfHeadUnit, journal_publications.publication, reports.startOfRepPeriod FROM journal_publications
INNER JOIN 
reports  
	ON journal_publications.report_id = reports.id
WHERE report_id IN 
(SELECT id FROM reports WHERE startOfRepPeriod >= "