#include "libft.h"

int	ft_isalnum(int d)
{
	if ((d >= 48 && d <= 57) || (d >= 65 && d <= 90) || (d >= 97 && d <= 122))
	{
		return (1);
	}
	return (0);
}
