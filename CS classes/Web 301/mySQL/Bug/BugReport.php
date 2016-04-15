<?php echo "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title>Bug Report</title>
	<link rel="stylesheet" type="text/css" href="php_styles.css"/>  	
</head>

<body>

<?php
	$db = new mysqli('cscdb.nku.edu', 'weymanm1', '159620', 'db_weymanm1');
	if (mysqli_connect_errno()) {
     echo "Error: Could not connect to database.  Please try again later.";
     exit;
  }
  
	$QueryResult = "select * from reports";
	$result = $db->query($QueryResult);
	$num_results = $result->num_rows;
	echo "<h1>Bug Database</h1>";
  
	echo "<table>\n";
	echo "<tr> <th>ID</th> <th>&nbsp;</th> <th>Product</th> <th>Version</th> <th>OS</th> <th>Type</th> <th>Summary</th> <th>Status</th> <th>Reported by</th> <th>Report date</th> </tr>\n";
  
	for ($i=0; $i <$num_results; $i++) {
     $row = mysqli_fetch_assoc($result);
     echo "<tr>";
	 echo "<td>" . $row['id'] . "</td>";
	 echo "<td width = '25'>" . "<a href='DeleteBug.php?id=" . $row['id'] . "'><img src='Delete-48x48.png' width='17' height='17' alt='' /></a></td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['product'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['version'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['os'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['btype'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['summary'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['status'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['reported'])) . "</td>";
	 echo "<td>" . htmlspecialchars(stripslashes($row['entered'])) . "</td>";
	 echo "</tr>\n";
  }
	 echo "</table>\n";


	$db->close();

?>

<p><a href="NewBug.html">Create New Bug Report</a></p>

</body>
</html>
