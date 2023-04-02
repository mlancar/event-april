#include <stdio.h>

int	len_word_max(char *str)
{
	int	i;
	int	len;
	int	len_max;

	i = 0;
	len_max = 0;
	while (str[i] && str[i] == 32)
		i++;
	while (str[i])
	{
		len = 0;
		while (str[i] && str[i] != 32)
		{
			len++;
			if (len > len_max)
				len_max = len;
			i++;
		}
		if (str[i])
			i++;
	}
	return (len_max);
}

int main(int ac, char **av)
{
	int	i;
	int	j;
	int	len_max;
	int	len_count;

	if (ac != 2)
		return (0);
	i = 0;
	len_max = len_word_max(av[i]) + 1;
	len_count = len_word_max(av[i]);
	while (len_max > 0)
	{
		printf("*");
		len_max--;
	}
	printf("\n");
	while (av[1][i] == 32)
		i++;
	while (av[1][i])
	{
		j = 0;
		printf("*");
		while (av[1][i] && av[1][i] != 32)
		{
			printf("%c", av[1][i]);
			j++;
			i++;
		}
		while (j < (len_count - 1))
		{
			printf(" ");
			j++;		
		}
		if (av[1][i])
			i++;
		printf("*\n");
		while (av[1][i] == 32)
			i++;
	}
	i = 0;
	len_max = len_word_max(av[i]) + 1;
	while (len_max > 0)
	{
		printf("*");
		len_max--;
	}
	printf("\n");
}