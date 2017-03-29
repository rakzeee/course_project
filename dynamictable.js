var d = document;
function addRow(id) {
    var tbody = d.getElementById(id);
    var rowCount = tbody.rows.length - 1;
    var row = d.createElement("tr");
    tbody.appendChild(row);
 	
	if (id == 'phdThesesTable') {
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
		td1.innerHTML = '<input type="text" name="studentName['+rowCount+']">';
		td2.innerHTML = '<input type="text" name="degree['+rowCount+']">';
		td3.innerHTML = '<input type="text" name="supervisorName['+rowCount+']">';
		td4.innerHTML = '<input type="text" name="committeeMembers['+rowCount+']">';
		td5.innerHTML = '<input type="text" name="institutiuon['+rowCount+']">';
		td6.innerHTML = '<input type="text" name="title['+rowCount+']">';
	}
	else if(id == 'studentWorkTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
		td1.innerHTML = '<input type="text" name="studentName['+rowCount+']">';
		td2.innerHTML = '<input type="text" name="work['+rowCount+']">';
	}
	else if(id == 'studentReportsTable') {
		var td1 = d.createElement("td");
    	var td2 = d.createElement("td");
    	var td3 = d.createElement("td");
		row.appendChild(td1);
    	row.appendChild(td2);
    	row.appendChild(td3);
		td1.innerHTML = '<input type="text" name="studentName['+rowCount+']">';
		td2.innerHTML = '<input type="text" name="title['+rowCount+']">';
		td3.innerHTML = '<input class="file" type="file" name="plan['+rowCount+']">';
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
	    
	    td1.innerHTML = '<input type="text" name="name['+rowCount+']">';
	    td2.innerHTML = '<select name="semester['+rowCount+']"><option>Spring</option><option>Fall</option></select>';
	    if(id == 'coursesTable')
			td3.innerHTML = '<select name="level['+rowCount+']"><option>Bachelor</option><option>Master</option><option>Phd</option></select>';
		else 
			td3.innerHTML = '<select name="exam['+rowCount+']"><option>Final exam</option><option>Repetition exam</option></select>'
		td4.innerHTML = '<input type="number" name="number['+rowCount+']">'
	}
}

function deleteRow(id) {	
	var table = document.getElementById(id);
			var rowCount = table.rows.length;
			var k = 2;
			if (id == 'phdThesesTable')
				k = 1;
			if(rowCount > k) {
				table.deleteRow(rowCount-1);
			}
}