<?php
include_once 'cv_data.php';
echo '<br> <br> <br>';
echo '<h1>Présentation</h1>';
echo '<img style="width : 25%; position : relative;"  src="uploads/avatar.jpg" alt=""';
echo '<br> <br> <br>';
echo 'Bonjour, je suis ';
pres();
echo '<br> <br> <br>';
echo '<h1 style=>Scolarité</h1>';
echo '<img style="width : 10%; position : relative;" src="uploads/scolaire.jpg" alt=""';
scol();
echo '<br> <br> <br>';
echo '<h1>Expériences professionnelles</h1>';
echo '<img style="width : 15%; position : relative;" src="uploads/exppro.jpg" alt=""';
exper();
echo '<br> <br> <br>';
echo '<h1>Loisirs</h1>';
echo '<img style="width : 20%; position : relative;" src="uploads/loisir.jpg" alt=""';
echo '<br>';
lois();
?>
<form action="admin.php" method="post">
<p>Identification : <br />
Login : <input type="text" name="user"/><br />
Mot de passe : <input type="password" name="password"/><br />
<input type="submit" value="Envoyer"/>