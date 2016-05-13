<html>
<head>
  <title>Book-O-Rama Book Entry Results</title>
</head>
<body>
<h1>Book-O-Rama Book Entry Results</h1>
<?php
  $username=$_POST['username'];
  $password=$_POST['password'];
  $hashed = sha1($password);

  if (!$username || !$password) {
     echo "You have not entered all the required details.<br />"
          ."Please go back and try again.";
     exit;
  }

  if (!get_magic_quotes_gpc()) {
    $name = addslashes($username);
    $password = addslashes($hashed);
	
  }

  @ $db = new mysqli('cscdb.nku.edu', 'weymanm1', '159620', 'db_weymanm1');

  if (mysqli_connect_errno()) {
     echo "Error: Could not connect to database.  Please try again later.";
     exit;
  }

  $query = "insert into authorised_users values
            ('".$username."', '".$hashed."')";
  $result = $db->query($query);
  if ($result) {
	  echo "<p>$query</p>";
      echo  $db->affected_rows." Customer inserted into database.";
  } else {
  	  echo "An error has occurred.  The item was not added.";
  }
  $db->close();
?>
</body>
</html>