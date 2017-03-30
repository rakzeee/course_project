var d = document;
function addRow(id) {
    var tbody = d.getElementById(id);
    var rowCount = tbody.rows.length - 1;
    var row = d.createElement("tr");
    tbody.appendChild(row);
	if (id == 'conferencePublicationTable' || id =='journalPublicationTable') {
		var td1 = d.createElement("td");
		row.appendChild(td1);
		td1.innerHTML = '<input type="text" name="publication['+rowCount+']" required>';
	}
	else if (id == 'researchCollaborationsTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
    	var td4 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
    	row.appendChild(td4);
		td1.innerHTML = '<input type="text" name="country['+rowCount+']" required>';
		td2.innerHTML = '<input type="text" name="institutionName['+rowCount+']" required>';
		td3.innerHTML = '<input type="text" name="contacts['+rowCount+']" required>';
		td4.innerHTML = '<input type="text" name="collaborationNature['+rowCount+']" required>';
	}
	else if (id == 'researchProjectsTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
    	var td4 = d.createElement("td");
    	var td5 = d.createElement("td");
    	var td6 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
    	row.appendChild(td4);
    	row.appendChild(td5);
    	row.appendChild(td6);
		td1.innerHTML = '<input type="text" name="title['+rowCount+']" required>';
		td2.innerHTML = '<input type="text" name="universityPersonnel['+rowCount+']" required>';
		td3.innerHTML = '<input type="text" name="externalPersonnel['+rowCount+']">';
		td4.innerHTML = '<input type="date" name="startDate['+rowCount+']" required>';
		td5.innerHTML = '<input type="date" name="endDate['+rowCount+']" required>';
		td6.innerHTML = '<input type="text" name="financing['+rowCount+']" required>';
	}
 	else if (id == 'grantsTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
    	var td4 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
    	row.appendChild(td4);
		td1.innerHTML = '<input type="text" name="title['+rowCount+']" required>';
		td2.innerHTML = '<input type="text" name="grantingAgency['+rowCount+']" required>';
		td3.innerHTML = '<select name="period['+rowCount+']"><option>1 month</option><option>3 month</option><option>6 month</option><option>1 year</option></select>';
		td4.innerHTML = '<input type="text" name="amount['+rowCount+']" required>';
	}
	else if (id == 'phdThesesTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
    	var td4 = d.createElement("td");
    	var td5 = d.createElement("td");
    	var td6 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
    	row.appendChild(td4);
    	row.appendChild(td5);
    	row.appendChild(td6);
		td1.innerHTML = '<input type="text" name="studentName['+rowCount+']" required>';
		td2.innerHTML = '<input type="text" name="degree['+rowCount+']" required>';
		td3.innerHTML = '<input type="text" name="supervisorName['+rowCount+']" required>';
		td4.innerHTML = '<input type="text" name="committeeMembers['+rowCount+']" required>';
		td5.innerHTML = '<input type="text" name="institutiuon['+rowCount+']" required>';
		td6.innerHTML = '<input type="text" name="title['+rowCount+']" required>';
	}
	else if(id == 'studentWorkTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
		td1.innerHTML = '<input type="text" name="studentName['+rowCount+']" required>';
		td2.innerHTML = '<input type="text" name="work['+rowCount+']" required>';
	}
	else if(id == 'studentReportsTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
		td1.innerHTML = '<input type="text" name="studentName['+rowCount+']" required>';
		td2.innerHTML = '<input type="text" name="title['+rowCount+']" required>';
		td3.innerHTML = '<input type="file" name="plan['+rowCount+']" required>';
	}
	else {
	    var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	    var td3 = d.createElement("td");
	    var td4 = d.createElement("td");
	 
	    row.appendChild(td1);
	    row.appendChild(td2);
	    row.appendChild(td3);
	    row.appendChild(td4);
	    
	    td1.innerHTML = '<input type="text" name="name['+rowCount+']" required>';
	    td2.innerHTML = '<select name="semester['+rowCount+']"><option>Spring</option><option>Fall</option></select>';
	    if(id == 'coursesTable')
			td3.innerHTML = '<select name="level['+rowCount+']"><option>Bachelor</option><option>Master</option><option>Phd</option></select>';
		else 
			td3.innerHTML = '<select name="exam['+rowCount+']"><option>Final exam</option><option>Repetition exam</option></select>'
		td4.innerHTML = '<input type="number" name="number['+rowCount+']" required>'
	}
}

function deleteRow(id) {	
	var table = document.getElementById(id);
			var rowCount = table.rows.length;
			var k = 2;
			if (id == 'phdThesesTable' || id == 'researchCollaborationsTable' || id == 'conferencePublicationTable' || id =='journalPublicationTable')
				k = 1;
			if(rowCount > k) {
				table.deleteRow(rowCount-1);
			}
}