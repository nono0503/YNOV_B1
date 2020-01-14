<?php
include_once 'cv_data.php';
echo '<br> <br> <br>';
echo '<h1>Présentation</h1>';
echo '<br> <br> <br>';
echo 'Bonjour, je suis ';
foreach($informations as $element)
{
    echo ' ' . $element;
}
echo '<br> <br> <br>';
echo '<h1 style=>Scolarité</h1>';
foreach($scolarite as $element) {
    echo '<br>' . '<hr>' . '<br>';
    foreach($element as $element1) {
        echo $element1 . '<br>';
    }
}
echo '<br> <br> <br>';
echo '<h1>Expériences professionnelles</h1>';
foreach($exp as $element) {
    echo '<br>' . '<hr>';
    foreach($element as $element1) {
        echo $element1 . '<br>';
    }
}
echo '<br> <br> <br>';
?>