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
	$name = $_POST["myName"];
	$email = $_POST["myEmail"];
	$job = $_POST["myJob"];
	
	echo "<p> myName: ", $name, "<br/>";
	echo "<p> myEmail: ", $email, "<br/>";
	echo "<p> myJob: ", $job, "</p>\n";
  ?>

     <h3>Thank you for your interest in the Painter!</h3>

<form action="#">
<input type="button" value = "Back" onclick="javascript:history.go(-1)" />
</form>
</div>
</body>
</html>
