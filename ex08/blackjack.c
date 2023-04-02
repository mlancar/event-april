#include <stdio.h>
#include <stdlib.h>

int	check_base(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "123456789TJQKA";
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (ac != 3)
		return (0);
	else
		while (av[1][i])
		{
			if (check_base(av[1][i]) == 0)
			{
				printf("Hand is invalid");
				return (0);
			}
			i++;

		}
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == '1')
				result = result + 1;
			if (av[1][i] == '2')
				result = result + 2;
			if (av[1][i] == '3')
				result = result + 3;
			if (av[1][i] == '4')
				result = result + 4;
			if (av[1][i] == '5')
				result = result + 5;
			if (av[1][i] == '6')
				result = result + 6;
			if (av[1][i] == '7')
				result = result + 7;
			if (av[1][i] == '8')
				result = result + 8;
			if (av[1][i] == '9')
				result = result + 9;
			if (av[1][i] == 'T')
				result = result + 10;
			if (av[1][i] == 'J')
				result = result + 10;
			if (av[1][i] == 'Q')
				result = result + 10;
			if (av[1][i] == 'K')
				result = result + 10;
			if (av[1][i] == 'A' && (result + 11) > 21)
				result = result + 1;
			if (av[1][i] == 'A' && (result + 11) <= 21)
				result = result + 11;
			i++;
		}
		if (result == 21)
			printf("Blackjack!\n");
		else
			printf("%d\n", result);
}