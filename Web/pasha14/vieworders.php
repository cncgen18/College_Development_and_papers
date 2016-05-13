<?php
	// create short variables name
	$DOCUMENT_ROOT = $_SERVER['DOCUMENT_ROOT'];
?>
	
<?php echo "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head>
	<title> Pasha The Painter - Customer Orders </title>
	<?php echo "<style type=\"text/css\"> body{color:blue;} </style>"; ?>
</head>

<body>
 <h1>Pasha The Painter</h1>
 <h2>Customer Estimate Requests </h2>
 <?php
	$fp = fopen("jobs.txt", "rb");
	
	
	if(!$fp) {
		echo "<p><strong> No orders pending. Please try again later. </strong></p></body></html>";
		exit;
	}
	echo "
	<table border=1> 
	<tr>
	<th>Customer</th>
	<th>Email</th>
	<th>Job</th></tr>";
	while(!feof($fp)) {
		$list = fgetcsv($fp, 100, ":", "\t");
		echo "<tr>";
		echo"<td>$list[0]</td>";
		echo"<td>$list[1]</td>";
		echo"<td>$list[2]</td>";
		echo"</tr>";
	}
	echo "</table>";
	fclose($fp);
 ?>
</body>
</html>