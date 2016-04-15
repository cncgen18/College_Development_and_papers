<html>
<head>
  <title>Book-O-Rama Book Entry Results</title>
</head>
<body>
<h1>Book-O-Rama Book Entry Results</h1>
<?php
  $name=$_POST['name'];
  $address=$_POST['address'];
  $city=$_POST['city'];

  if (!$name || !$address || !$city) {
     echo "You have not entered all the required details.<br />"
          ."Please go back and try again.";
     exit;
  }

  if (!get_magic_quotes_gpc()) {
    $name = addslashes($name);
    $address = addslashes($address);
    $city = addslashes($city);
  }

  @ $db = new mysqli('cscdb.nku.edu', 'weymanm1', '159620', 'db_weymanm1');

  if (mysqli_connect_errno()) {
     echo "Error: Could not connect to database.  Please try again later.";
     exit;
  }

  $query = "insert into customers values
            (NULL,?,?,?)";
  $stmt = $db->prepare($query);
  $stmt->bind_param("sss", $name, $address, $city);
  $stmt->execute();
  echo $stmt->affected_rows."customer inserted into database.";
  $db->close();
?>
</body>
</html>