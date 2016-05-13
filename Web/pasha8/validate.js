function validateForm() {
	if( !document.forms[0].Name.value.match(/^[A-Z]\w+\s([A-Z]\.\s)?[A-Z]\w+$/ )){
		alert("Name is not in correct format!");
		return false; }
	if (!document.forms[0].Email.value.match(/^\w+[@]\w+\.\w+$/)){
		alert("email is not in the correct format");
		return false; }
	if (document.forms[0].Phone.value == "" ) {
		alert("Phone field cannot be empty.");
        return false; }
	return true;
}