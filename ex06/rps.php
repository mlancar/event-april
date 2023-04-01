<?php 
$rock = 'rock';
$paper = 'paper';
$scissors = 'scissors';
$array = array($rock, $paper, $scissors);
$computer = $array[array_rand($array)];
$user = readline('Choose rock, paper, or scissors : ');
while ($user !== $rock && $user !== $paper && $user !== $scissors)
	$user = readline('Please choose rock, paper, scissors : ');
if ($user === $computer)
	echo "Draw. The computer chose $computer\n";
if ($user === $rock && $computer === $paper)
	echo "Sorry, you lost. The computer chose paper.\n";
if ($user === $paper && $computer === $scissors)
	echo "Sorry, you lost. The computer chose scissors.\n";
if ($user === $scissors && $computer === $rock)
	echo "Congratulations! You won! The computer chose rock.\n";
if ($user === $rock && $computer === $scissors)
	echo "Congratulations! You won! The computer chose scissors.\n";
if ($user === $paper && $computer === $rock)
	echo "Congratulations! You won! The computer chose rock.\n";
if ($user === $scissors && $computer === $paper)
	echo "Sorry, you lost. The computer chose scissors.\n";
?>