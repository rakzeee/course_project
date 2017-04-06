var savedPages = 0;
var endPage = 3;

function onClick() {
	
	var frame = document.getElementById('frame').contentWindow.document;
	var page = getPage(frame);
	
	if (noEmptyField(frame)) {
		saving(frame, page);
		
		console.log(page);
		if(page==1) {
			console.log("submit");
			document.getElementById('formSubmit').submit(); 
		}
		else 
			transfer ("index"+(page+1)+".html");
	}
	else {
		alert('Enter all required fields');
	}
}

function onLoad() {
	var frame = document.getElementById('frame').contentWindow.document;
	var page = getPage(frame);
	
	if(page > savedPages + 1)
		transfer("index1.html");
}

function saving(doc, page) {
	if(page <= savedPages) {
		document.getElementById('formPage' + page).remove();
		savedPages--;
	}
	var elements = doc.getElementsByClassName('toForm');
	var cont = document.getElementById('container')
	var div = document.createElement('div');
	div.setAttribute('id', 'formPage' + page);
	var elem
	for (var i=0; i<elements.length; i++) {
		elem = document.importNode(elements[i], true);
		elem.value = elements[i].value;
		console.log(elem);
		div.appendChild(elem);
	}
	cont.appendChild(div);
	savedPages++;
}

function noEmptyField(doc) {
	var elements = doc.getElementsByClassName('toForm');
	for (var i = 0; i < elements.length; i++) {
		console.log('value' + elements[i].value);
		if (elements[i].getAttribute('required') && elements[i].value === ''){
			return false;
		}
	}
	
	return true;
}

function transfer(link) {
	document.getElementById('frame').setAttribute('src', link);
}

function getPage(doc) {
	return doc.getElementById('page').getAttribute('name')[0]-'0';
}