<html>
  <head>
    <meta charset = "utf-8">
    <title>


    </title>
  </head>
  <body>

   <form action="hello.php"  method="get">
      n1: <input type="number" name = "n1">
      n2: <input type="number" name = "n2">
      <input type = "submit">
  </form>
  <br>
  <?php
     $n1;
     $n2 = 90;
     echo $_GET["n1"] + $_GET["n2"]



  ?>

  </body>
</html>
