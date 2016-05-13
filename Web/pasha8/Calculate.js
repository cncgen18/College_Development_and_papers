function Calculate(){
	var height = document.estimater.Height.value;
	var length = document.estimater.Length.value;
	var width = document.estimater.Width.value;
	var area = 2 * (length * height) + 2 * (length * width) + 2 * (height * width);
	document.estimater.Area.value = area;
	if(document.estimater.Regular.checked){
		document.estimater.Estimate.value = area * 1.75;
		}
	else
		document.estimater.Estimate.value = area * 2.50;
}
	