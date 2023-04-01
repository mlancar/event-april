print "Enter a string : \n";
my $palindrome = <>;
$palindrome =~ tr/A-Z/a-z/;
$palindrome =~ tr/A-Za-z0-9//cd;
print "$palindrome";
chomp $palindrome;
if (reverse($palindrome) eq $palindrome)
{
	print "The string is a palindrome !\n";
}
else
{
	print "The string is not a palindrome.\n";
}