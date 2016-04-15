<?php echo "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title>Bug Report</title>
	<link rel="stylesheet" type="text/css" href="php_styles.css" />  	
</head>

<body>

  <?php
  $product = (isset($_POST['product']) ? $_POST['product'] : "");
  $version = (isset($_POST['version']) ? $_POST['version'] : "");
  $os = (isset($_POST['os']) ? $_POST['os'] : "");
  $btype = (isset($_POST['btype']) ? $_POST['btype'] : "");
  $summary = (isset($_POST['summary']) ? $_POST['summary'] : "");
  $status = (isset($_POST['status']) ? $_POST['status'] : "");
  $reported = (isset($_POST['reported']) ? $_POST['reported'] : "");
  
  // Step 1
  $entered = (isset($_POST['entered']) ? $_POST['entered'] : "");
 
  
  if (!$product || !$version || !$os || !$btype || !$summary || !$status || !$reported || !$entered) {
     echo "<p> You have not entered all the required details.<br />"
          . "Click your browser's Back button to return to the form.</p> </body> </html>";
     exit;
  }

  if (!get_magic_quotes_gpc()) {
    $product = addslashes(trim($product));
    $version = addslashes(trim($version));
    $os = addslashes(trim($os));
    $btype = addslashes(trim($btype));
    $summary = addslashes(trim($summary));
    $status = addslashes($status);
    $reported = addslashes(trim($reported));
	
	// Step 2
    $entered = addslashes(trim($entered));
  }

// Step 3
	$db = new mysqli('cscdb.nku.edu', 'weymanm1', '159620', 'db_weymanm1');
	if (mysqli_connect_errno()) {
     echo "Error: Could not connect to database.  Please try again later.";
     exit; }


// Step 4
	$query = "insert into reports values
            (NULL,'".$product."', '".$version."', '".$os."', '".$btype."', '".$summary."', '".$status."', '".$reported."', '".$entered."')";
	$result = $db->query($query);

// Step 5
  if ($result) {
	$BugID = mysqli_insert_id($db);
	echo "<h1>Entry Saved</h1> <p>Bug report assigned an ID of $BugID.</p>";
  } 
  else {
  	  echo "<p>Unable to execute the query. Error code " . mysqli_errno($db) . ": " . mysqli_error($db) . " </p> </body> </html>";
  }

  mysqli_close($db); ?>


  
<p><a href="BugReport.php">Return to Bug Report</a></p>
</body>
</html>