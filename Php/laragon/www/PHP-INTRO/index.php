<!DOCTYPE html>
<html lang="en">
<head>
  <title>PHP</title>
  <style>
  body {
    margin: 0;
    padding: 0;
    width: 100vw;
    height: 100vh;
    background-color: #000;
    color: #fff;
    font-family: sans-serif;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
  }
  </style>
</head>
<body>
  <?php
  date_default_timezone_set("Europe/Paris");
    $hello = "Hello ";
    $world = Array(
      "W",
      "o",
      "r",
      "l",
      "d",
      "!"
    );
    echo ("<h1>" . $hello);
    for($i=0; $i<=count($world)-1; $i++){
      echo $world[$i];
    }
    echo  "</h1>";
    echo "<small>Some gay shit...</small>";
  ?>
</body>
</html>

