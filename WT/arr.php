<?php
$a=array(4,23,5,6,21,1);
$b=array(11,23,51,12);
$c=array_merge($a,$b);
arsort($c);
foreach($c as $i)
{
    echo $i;
}
?>