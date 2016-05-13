<?php
  $name = $_POST['name'];
  $password = $_POST['password'];

  if ((!isset($name)) || (!isset($password))) {
  echo "<h1>Visitor needs to enter a name and password</h1>";

  } else {
    // connect to mysql
 @ $link = mysqli_connect('cscdb.nku.edu', 'weymanm1', '159620','db_weymanm1');

  if (!$link) {
    echo '<p>Could not connect to bug db: ' . mysqli_connect_error() . '. Please try again later. </p> </body> </html>';
	exit;
  }


    // query the database to see if there is a record which matches
    $query = "select count(*) from authorised_users where
              name = '".$name."' and
              password = sha1('".$password."')";

    $result = $link->query($query);
    if(!$result) {
      echo "Cannot run query.";
      exit;
    }
    $row = mysqli_fetch_row($result);
    $count = $row[0];

    if ($count > 0) {
      // visitor's name and password combination are correct
      echo "<h1>Here it is!</h1>
            <p>I bet you are glad you can see this secret page.</p>";
	  require("BugReport.php");
    } else {
      // visitor's name and password combination are not correct
      echo "<h1>Go Away!</h1>
            <p>You are not authorized to use this resource.</p>";
    }
  }
?>