function load() {
	var curPage = window.parent.document.getElementById("frame");
	curPage.style.height = "100px";
	var curFrame = window.parent.document.getElementsByTagName('iframe')[0];
	var scrollHeight = Math.max(
		curFrame.contentWindow.document.body.scrollHeight, curFrame.contentWindow.document.documentElement.scrollHeight,
		curFrame.contentWindow.document.body.offsetHeight, curFrame.contentWindow.document.documentElement.offsetHeight,
		curFrame.contentWindow.document.body.clientHeight, curFrame.contentWindow.document.documentElement.clientHeight
	);
	console.log(scrollHeight);
	curPage.style.height = scrollHeight + "px";
}