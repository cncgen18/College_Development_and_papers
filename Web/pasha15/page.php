<?php
	class Page{
		public $content;
		
		public function Display(){
			$this -> DisplayHeader();
			$this -> DisplayMenu();
			echo $this ->content;
			$this -> DisplayFooter();
		}
		
		public function DisplayHeader(){
			?>
			<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
			"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
			<html xmlns="http://www.w3.org/1999/xhtml" lang="en" xml:lang="en">
			<head>
			<title>Pasha the Painter</title>
			<link href="painter.css" rel="stylesheet" type="text/css" />
			<link href="favicon.ico" rel="icon" type="images/x-icon" />
			<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
			</head>
			<body> 
			<div id="container">
			<h1 id="logo"><img src="painterlogo.gif" alt="Pasha the Painter" width="620" height="120" /></h1>
			<?php
		}
		
		public function DisplayMenu(){
			?>
			<div id="leftcolumn">
			<ul>
			<li><a href="index.php">Home</a></li>
			<li><a href="services.html">Services</a></li>
			<li><a href="testimonials.html">Testimonials</a></li>
			<li><a href="estimates.html">Estimates</a></li>
			</ul>
			</div>
			<?php
		}
		
		public function DisplayFooter(){
			?>
			<div id="footer">Copyright &copy; 2011 Pasha the Painter<br />
			<a href="mailto:yourfirstname@yourlastname.com">yourfirstname@yourlastname.com</a></div>
			</div>
			</div>
			</body>
			</html>
			<?php
		}
	}
	?>