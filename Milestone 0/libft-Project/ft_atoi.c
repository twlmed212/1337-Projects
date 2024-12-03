#include "libft.h"

static int	skip_zeros(const char *str)
{
	int	j;

	j = 0;
	while (str[j] == '0')
	{
		j++;
	}
	return (j);
}

static int	skip_spaces(const char *char_nbr, int *i)
{
	int	sign;

	sign = 1;
	while (char_nbr[*i] == ' ' || (char_nbr[*i] >= 9 && char_nbr[*i] <= 13))
		(*i)++;
	if ((char_nbr[*i] == '-') || (char_nbr[*i] == '+'))
	{
		if (char_nbr[*i] == '-')
			sign = sign * -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *char_nbr)
{
	int	result;
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	result = 0;
	sign = skip_spaces(char_nbr, &i);
	if (*(char_nbr + i) == '0')
		j = skip_zeros(char_nbr + i);
	while (char_nbr[i] >= '0' && char_nbr[i] <= '9')
	{
		result = (result * 10) + (char_nbr[i] - '0');
		i++;
		if (i - j >= 19 && sign > 0)
			return (-1);
		else if (i - j >= 19 && sign < 0)
			return (0);
	}
	return (result * sign);
}
