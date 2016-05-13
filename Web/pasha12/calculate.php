<html>
<head>
<title>The Painter</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<style type="text/css">
body {background-color:#FFFFFF;
      font-family:Arial;
      }
td {color:#000000;
    font-family:Arial;
     }
.heading {color:#ffffff;
          font-size:larger;
          font-weight:bold;
   background-color:#336600;
         }
div {text-align:center; }
</style>      
</head>
<body>
<div>
<img src="painterlogo.gif" width="620" height="120" alt="The Painter" /><br />
 <h2>Free Estimate</h2>
 <h3>We will contact you to arrange your free estimate</h3>
 <h3>Here is the information you entered:</h3>
 <?php
	$length = $_POST["Length"];
	$width = $_POST["Width"];
	$height = $_POST["Height"];
	$radio = $_POST["Radio"];
	$area = 0;
	$area = ($length * $width) + 2 * ($length * $height) + 2 * ($height * $width);
	echo "<p> Your Room Size: ", $area, "<br/>";
	
	if ($radio == "Regular"){
		echo "<p> Estimate: ", 1.75 * $area, "</p>"; }
	else{
		echo "<p> Estimate: ", 2.50 * $area, "</p>"; }
  ?>

     <h3>Thank you for your interest in the Painter!</h3>

<form action="#">
<input type="button" value = "Back" onclick="javascript:history.go(-1)" />
</form>
</div>
</body>
</html>