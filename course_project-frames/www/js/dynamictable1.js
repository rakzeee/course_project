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
	    
	    td1.innerHTML = '<input type="text" name="companyICT:'+rowCount+'" required>';
	    td2.innerHTML = '<input type="text" name="collaborationICT:'+rowCount+'" required>';
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
			    
	    td1.innerHTML = '<input type="text" name="recipientPrizeT:'+rowCount+'" required>';
	    td2.innerHTML = '<input type="text" name="prizePrizeT:'+rowCount+'" required>';
	    td3.innerHTML = '<input type="text" name="institutionPrizeT:'+rowCount+'" required>';
	    td4.innerHTML = '<input type="date" name="datePrizeT:'+rowCount+'" required>';
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
			    
	    td1.innerHTML = '<input type="text" name="authorsPAT:'+rowCount+'" required>';
	    td2.innerHTML = '<input type="text" name="articlePAT:'+rowCount+'" required>';
	    td3.innerHTML = '<input type="text" name="awardingPAT:'+rowCount+'" required>';
	    td4.innerHTML = '<input type="text" name="awardPAT:'+rowCount+'" required>';
	    td5.innerHTML = '<input type="date" name="datePAT:'+rowCount+'" required>';
	}
	else if (id == 'membershipsTable') {
		var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	
	    row.appendChild(td1);
	    row.appendChild(td2);
	    
	    td1.innerHTML = '<input type="text" name="memberMST:'+rowCount+'" required>';
	    td2.innerHTML = '<input type="date" name="dateMST:'+rowCount+'" required>';
	}
	else if (id == 'patentTable') {
	    var td1 = d.createElement("td");
	    var td2 = d.createElement("td");
	
	    row.appendChild(td1);
	    row.appendChild(td2);
	    
	    td1.innerHTML = '<input class="toForm" type="text" name="patentPT:'+rowCount+'" required="true" form="formSubmit"';
	    td2.innerHTML = '<input class="toForm" type="text" name="countryPT:'+rowCount+'" required="true" form="formSubmit"';
	}
	else {
		var td1 = d.createElement("td");
	    row.appendChild(td1);
	    td1.innerHTML = '<input type="text" name="licenseLT:'+rowCount+'" required>';
	}
	changeHeight();
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
	changeHeight();
}

function changeHeight() {
	var curPage = window.parent.document.getElementById("frame");
	var curFrame = window.parent.document.getElementsByTagName('iframe')[0];
	var scrollHeight = Math.max(
//		curFrame.contentWindow.document.body.scrollHeight, curFrame.contentWindow.document.documentElement.scrollHeight
		curFrame.contentWindow.document.body.offsetHeight, curFrame.contentWindow.document.documentElement.offsetHeight
//		curFrame.contentWindow.document.body.clientHeight, curFrame.contentWindow.document.documentElement.clientHeight
	);
	console.log(scrollHeight);
	curPage.style.height = scrollHeight + "px";
}