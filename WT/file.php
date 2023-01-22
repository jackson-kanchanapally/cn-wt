<?php
$fp=fopen("index.txt","r");
$c=fread($fp,filesize("index.txt"));
$nf=fopen("js.txt","w");
$nw=fwrite($nf,$c);
echo $nw;
fclose($fp);
fclose($nf);
?>
