<?php
include_once 'cv_data.php';
echo 'Bonjour, je suis ';
foreach($informations as $element)
{
    echo ' ' . $element;
}
echo '<br> <br> <br>';
foreach($scolarite as $element) {
    echo '<hr>';
    foreach($element as $element1) {
        echo $element1 . '<br>';
    }
}
echo '<br> <br> <br>';
foreach($exp as $element) {
    echo '<hr>';
    foreach($element as $element1) {
        echo $element1 . '<br>';
    }
}
?>
<style>
    body {
        background-color : black;
        color : white;
    }
</style>