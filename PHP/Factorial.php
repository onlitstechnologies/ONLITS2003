<?php
$f=1;
$n = readline("Enter a number: ");
for($i=1; $i<=$n; $i++) {
	$f = $f * $i;
}
echo "The factorial of $n is $f.\n";
