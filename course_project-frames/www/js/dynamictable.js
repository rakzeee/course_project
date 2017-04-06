var d = document;
function addRow(id) {
    var tbody = d.getElementById(id);
    var rowCount = tbody.rows.length - 1;
    var row = d.createElement("tr");
    tbody.appendChild(row);
	if (id == 'conferencePublicationTable') {
		var td1 = d.createElement("td");
		row.appendChild(td1);
		td1.innerHTML = '<input class="toForm" type="text" name="conferencePublication['+rowCount+']" required="true" form="formSubmit">';
	}
	else if (id =='journalPublicationTable') {
		var td1 = d.createElement("td");
		row.appendChild(td1);
		td1.innerHTML = '<input class="toForm" type="text" name="journalPublication['+rowCount+']" required="true" form="formSubmit">';
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
		td1.innerHTML = '<input class="toForm" type="text" name="countryRC['+rowCount+']" required="true" form="formSubmit">';
		td2.innerHTML = '<input class="toForm" type="text" name="institutionNameRC['+rowCount+']" required="true" form="formSubmit">';
		td3.innerHTML = '<input class="toForm" type="text" name="contactsRC['+rowCount+']" required="true" form="formSubmit">';
		td4.innerHTML = '<input class="toForm" type="text" name="collaborationNatureRC['+rowCount+']" required="true" form="formSubmit">';
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
		td1.innerHTML = '<input class="toForm" type="text" name="titleRP['+rowCount+']" required="true" form="formSubmit">';
		td2.innerHTML = '<input class="toForm" type="text" name="universityPersonnelRP['+rowCount+']" required="true" form="formSubmit">';
		td3.innerHTML = '<input class="toForm" type="text" name="externalPersonnelRP['+rowCount+']" form="formSubmit">';
		td4.innerHTML = '<input class="toForm date" type="date" name="startDateRP['+rowCount+']" required="true" form="formSubmit">';
		td5.innerHTML = '<input class="toForm date" type="date" name="endDateRP['+rowCount+']" required="true" form="formSubmit">';
		td6.innerHTML = '<input class="toForm" type="text" name="financingRP['+rowCount+']" required="true" form="formSubmit">';
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
		td1.innerHTML = '<input class="toForm" type="text" name="titleGrants['+rowCount+']" required="true" form="formSubmit">';
		td2.innerHTML = '<input class="toForm" type="text" name="grantingAgencyGrants['+rowCount+']" required="true" form="formSubmit">';
		td3.innerHTML = '<select class="toForm" name="periodGrants['+rowCount+']" required="true" form="formSubmit"><option>1 month</option><option>3 month</option><option>6 month</option><option>1 year</option></select>';
		td4.innerHTML = '<input class="toForm" type="text" name="amountGrants['+rowCount+']" required="true" form="formSubmit">';
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
		td1.innerHTML = '<input class="toForm" type="text" name="studentNamePHD['+rowCount+']" required="true" form="formSubmit">';
		td2.innerHTML = '<input class="toForm" type="text" name="degreePHD['+rowCount+']" required="true" form="formSubmit">';
		td3.innerHTML = '<input class="toForm" type="text" name="supervisorNamePHD['+rowCount+']" required="true" form="formSubmit">';
		td4.innerHTML = '<input class="toForm" type="text" name="committeeMembersPHD['+rowCount+']" required="true" form="formSubmit">';
		td5.innerHTML = '<input class="toForm" type="text" name="institutiuonPHD['+rowCount+']" required="true" form="formSubmit">';
		td6.innerHTML = '<input class="toForm" type="text" name="titlePHD['+rowCount+']" required="true" form="formSubmit">';
	}
	else if(id == 'studentWorkTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
		td1.innerHTML = '<input class="toForm" type="text" name="studentNameSW['+rowCount+']" required="true" form="formSubmit">';
		td2.innerHTML = '<input class="toForm" type="text" name="workSW['+rowCount+']" required="true" form="formSubmit">';
	}
	else if(id == 'studentReportsTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
		td1.innerHTML = '<input class="toForm" type="text" name="studentNameSR['+rowCount+']" required="true" form="formSubmit">';
		td2.innerHTML = '<input class="toForm" type="text" name="titleSR['+rowCount+']" required="true" form="formSubmit">';
		td3.innerHTML = '<input class="toForm" type="file" name="planSR['+rowCount+']" form="formSubmit">';
	}
	else if(id == 'coursesTable'){
	    var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	    var td3 = d.createElement("td");
	    var td4 = d.createElement("td");
	 
	    row.appendChild(td1);
	    row.appendChild(td2);
	    row.appendChild(td3);
	    row.appendChild(td4);
	    
	    td1.innerHTML = '<input class="toForm" type="text" name="nameCourses['+rowCount+']" required="true" form="formSubmit">';
	    td2.innerHTML = '<select class="toForm" name="semesterCourses['+rowCount+']" required="true" form="formSubmit"><option>Spring</option><option>Fall</option></select>';
		td3.innerHTML = '<select class="toForm" name="levelCourses['+rowCount+']" required="true" form="formSubmit"><option>Bachelor</option><option>Master</option><option>Phd</option></select>';
		td4.innerHTML = '<input class="toForm" type="number" name="numberCourses['+rowCount+']" required="true" form="formSubmit">'
	}
	else if(id == 'examinationTable'){
		var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	    var td3 = d.createElement("td");
	    var td4 = d.createElement("td");
	 
	    row.appendChild(td1);
	    row.appendChild(td2);
	    row.appendChild(td3);
	    row.appendChild(td4);
	    
	    td1.innerHTML = '<input class="toForm" type="text" name="nameExamination['+rowCount+']" required="true" form="formSubmit">';
	    td2.innerHTML = '<select class="toForm" name="semesterExamination['+rowCount+']" required="true" form="formSubmit"><option>Spring</option><option>Fall</option></select>';
		td3.innerHTML = '<select class="toForm" name="examExamination['+rowCount+']" required="true" form="formSubmit"><option>Final exam</option><option>Repetition exam</option></select>'
		td4.innerHTML = '<input class="toForm" type="number" name="numberExamination['+rowCount+']" required="true" form="formSubmit">'
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