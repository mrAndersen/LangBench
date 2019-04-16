<?php


$data = file_get_contents("../set.txt");
$data = explode("\n",$data);
$i = 0;


$start = microtime(true);
foreach($data as $v){
    if (strpos($v, "abcde") !== false){
        $i++;
    }
}

echo(sprintf("PHP in %dms - %d\n",(microtime(true) - $start)*1000,$i));