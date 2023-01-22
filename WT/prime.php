<?php 
    for($i=2;$i<50;$i++)
    {
        $count=0;
        for($j=2;$j<($i/2);$j++)
        {
            if(($i%$j)==0)
            {
                $count++;
                break;;
            }
        }
        if($count==0)
        {echo $i;}
    }
?>