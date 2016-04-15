<?php
	require("page.php");
	$Home = new Page();
	
	$Home->content =	"<div id='rightcolumn'>
				<p>We will work with you to create the home of your dreams.</p>
				<ul class='category'>
				<li>Interior Painting</li>
				<li>Exterior Painting</li>
				<li>Wallpaper Removal</li>
				<li>Wallpaper Installation</li>
				<li>Drywall</li>
				</ul>";
	
	$Home->Display();

?>