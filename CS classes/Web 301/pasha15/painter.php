	<?php require('header.php') ?>
	<h2>Free Estimate</h2>
	<h3>We will contact you to arrange your free estimate</h3>
	<h3>Here is the information you entered:</h3>
 <?php
	function IsValid($email,$zip,$phone){
		$valid = true;
		$emailPattern = '/^[a-zA-Z0-9_\-.]+@[a-zA-Z0-9_\-.]+\.[a-zA-Z0-9_\-.]+$/';
		$zipPattern = '/^[0-9]{5}$/';
		$badChar = array("(",")"," ", "-");
		$newPhone = str_replace($badChar,"",$phone);
		$phonePattern1 = '/^[0-9]{7}$/';
		$phonePattern2 = '/^[0-9]{10}$/';
		if (!preg_match($emailPattern, $email)){
			throw new Exception("$email is not a valid email address.");
		}
		if (!preg_match($zipPattern, $zip)){
			throw new Exception("$zip is not a valid zipcode.");
		}
		if (!preg_match($phonePattern1, $newPhone) && !preg_match($phonePattern2, $newPhone)){
			throw new Exception("$phone is not a valid phone number.");
		}
		return $valid;
	}
	
	$name = $_POST["myName"];
	$email = $_POST["myEmail"];
	$job = $_POST["myJob"];
	$phone = $_POST["myPhone"];
	$zip = $_POST["myZip"];
	$fp = fopen("jobs.txt", "a+");
	$output = $name .":\t" . $email . ":\t" . $job . "\r\n";
	
	try{
		isValid($email,$zip,$phone);
	}
	catch(Exception $e){
		echo $e->getMessage();
		echo "<p> please return to the previous page and try again <p>";
	}
		echo "<p> your order is as follows: <p>";
		echo "<p> myName: ", $name, "<br/>";
		echo "<p> myEmail: ", $email, "<br/>";
		echo "<p> myPhone: ", $phone, "<br/>";
		echo "<p> myZip: ", $zip, "<br/>";
		echo "<p> myJob: ", $job, "</p>\n";
		fwrite($fp,$output,strlen($output));
	fclose($fp);
	
  ?>
<h3>Thank you for your interest in the Painter!</h3>

	<form action="#">
	<?phprequire('footer.php')?>
     


