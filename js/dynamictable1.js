var d = document;
function addRow(id) {
    var tbody = d.getElementById(id);
    var rowCount = tbody.rows.length - 1;
    var row = d.createElement("tr");
    tbody.appendChild(row);

	if (id == 'industryCollaborationsTable') {
		var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	
	    row.appendChild(td1);
	    row.appendChild(td2);
	    
	    td1.innerHTML = '<input type="text" name="company['+rowCount+']" required>';
	    td2.innerHTML = '<input type="text" name="collaboration['+rowCount+']" required>';
	}
	else if (id == 'prizesTable') {
		var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	    var td3 = d.createElement("td");
	    var td4 = d.createElement("td");
		
		row.appendChild(td1);
		row.appendChild(td2);
		row.appendChild(td3);
		row.appendChild(td4);
			    
	    td1.innerHTML = '<input type="text" name="recipient['+rowCount+']" required>';
	    td2.innerHTML = '<input type="text" name="prize['+rowCount+']" required>';
	    td3.innerHTML = '<input type="text" name="institution['+rowCount+']" required>';
	    td4.innerHTML = '<input type="date" name="date['+rowCount+']" required>';
	}
	else if (id == 'paperAwardsTable') {
	    var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	    var td3 = d.createElement("td");
	    var td4 = d.createElement("td");
	    var td5 = d.createElement("td");
		
		row.appendChild(td1);
		row.appendChild(td2);
		row.appendChild(td3);
		row.appendChild(td4);
		row.appendChild(td5);
			    
	    td1.innerHTML = '<input type="text" name="authors['+rowCount+']" required>';
	    td2.innerHTML = '<input type="text" name="article['+rowCount+']" required>';
	    td3.innerHTML = '<input type="text" name="awarding['+rowCount+']" required>';
	    td4.innerHTML = '<input type="text" name="award['+rowCount+']" required>';
	    td5.innerHTML = '<input type="date" name="date['+rowCount+']" required>';
	}
	else if (id == 'membershipsTable') {
		var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	
	    row.appendChild(td1);
	    row.appendChild(td2);
	    
	    td1.innerHTML = '<input type="text" name="member['+rowCount+']" required>';
	    td2.innerHTML = '<input type="date" name="date['+rowCount+']" required>';
	}
	else if (id == 'patentTable') {
	    var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	
	    row.appendChild(td1);
	    row.appendChild(td2);
	    
	    td1.innerHTML = '<input type="text" name="patent['+rowCount+']" required>';
	    td2.innerHTML = '<input type="text" name="country['+rowCount+']" required>';
	}
	else {
		var td1 = d.createElement("td");
	    row.appendChild(td1);
	    td1.innerHTML = '<input type="text" name="license['+rowCount+']" required>';
	}
}

function deleteRow(id) {	
	var table = document.getElementById(id);
			var rowCount = table.rows.length;
			var k = 2;
			if (id == 'patentTable' || id == 'licenseTable' || id == 'paperAwardsTable' || id == 'membershipsTable'
				|| id == 'prizesTable' || id == 'industryCollaborationsTable')
				k = 1;
			if(rowCount > k) {
				table.deleteRow(rowCount-1);
			}
}