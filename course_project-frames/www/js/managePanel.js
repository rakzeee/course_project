﻿function selectQuery() {
	var query = document.getElementById('query').value;
	
	if (query === 'Publications from given year') {
		var formP = document.createElement("form");
		formP.setAttribute('action', '/publications');
		formP.setAttribute('method', 'post');
		
		formP.innerHTML = '<input type="number" name="year" required="true"><input type="submit">';
		removeChilds('forInput');
		document.getElementById("forInput").appendChild(formP);
	}
	else if (query === 'Courses taught between period') {
		var formP = document.createElement("form");
		
		formP.setAttribute('action', '/courses_taught');
		formP.setAttribute('method', 'post');
		
		formP.innerHTML = '<input type="date" name="start_date" required="true" placeholder="start"><input type="date" name="end_date" required="true" placeholder="end"><input type="submit">';
		removeChilds('forInput');
		document.getElementById("forInput").appendChild(formP);
	}
	else if (query === 'Students supervised') {
		var formP = document.createElement("form");
		
		formP.setAttribute('action', '/students_supervised');
		formP.setAttribute('method', 'post');
		
		formP.innerHTML = '<input type="submit">'
		removeChilds('forInput');
		document.getElementById("forInput").appendChild(formP);
	}
	else if (query === 'Submitted reports') {
		var formP = document.createElement("form");
		
		formP.setAttribute('action', '/submitted_reports');
		formP.setAttribute('method', 'post');
		
		formP.innerHTML = '<input type="number" name="year" required="true"><input type="submit">'
		removeChilds('forInput');
		document.getElementById("forInput").appendChild(formP);
	}
}

function removeChilds(id) {
	var container = document.getElementById(id);

	while (container.firstChild) {
		container.removeChild(container.firstChild);
	}
}