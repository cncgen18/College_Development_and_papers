<?php echo "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title>Bug Report</title>
	<link rel="stylesheet" type="text/css" href="php_styles.css">  	
</head>

<body>
<?php
  $id = (isset($_GET['id']) ? $_GET['id'] : "");

  if (!id) {
     echo "<p> Indicate bug to delete .</p> </body> </html>";
     exit;
  }  
  
// Step 1
	$db = new mysqli('cscdb.nku.edu', 'weymanm1', '159620', 'db_weymanm1');
	if (mysqli_connect_errno()) {
     echo "Error: Could not connect to database.  Please try again later.";
     exit; }


// Step 2
  $query = "delete from reports where id = $id";
  $result = $db->query($query);


// Step 3
  if ($result) {
	mysqli_close($db);
	header("location: BugReport.php");
  } 
  else {
  	  echo "<p>Unable to execute the query. Error code " . mysqli_errno($db) . ": " . mysqli_error($db) . " </p> </body> </html>";
  }

  mysqli_close($db);
?>  
</body>
</html>
