<?php echo "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head>
	<title> Bob's Auto Parts - Order Results </title>
	<style type="text/css"> body {color:blue;} </style>
</head>

<body>
 <h1>Bob's Auto Parts</h1>
 <h2>Order Results </h2>
 <?php
	// create short variables names
	$tireqty = $_POST["tireqty"];
	$oilqty = $_POST["oilqty"];
	$sparkqty = $_POST["sparkqty"];
	$find = $_POST["find"];
	
	echo "<p> Order processed at ";
	echo date ("H:i, jS F Y"); 
	echo ".</p>\n";
	
	echo "<p> Your order is as follows: </p>\n";
	echo "<p>", $tireqty, " tires <br />"; 
	echo $oilqty, " bottles of oil <br />"; 
	echo $sparkqty, " spark plugs </p>\n"; 

	switch($find) {
		case "a":
			echo "<p>Regular customer.</p>\n";
			break;
		case "b":
			echo "<p>Customer referred by TV advertising.</p>\n";
			break;
		case "c":
			echo "<p>Customer referred by phone directory.</p>\n";
			break;
		case "d":
			echo "<p>Customer referred by word of mouth.</p>\n";
			break;
		default:
			echo "<p>We don't know how this customer found us.</p>\n";
	}	
 ?>
</body>
</html>