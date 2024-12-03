#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pointer1;
	const unsigned char	*pointer2;

	pointer1 = s1;
	pointer2 = s2;
	while (n--)
	{
		if (*pointer1 != *pointer2)
		{
			return (*pointer1 - *pointer2);
		}
		pointer1++;
		pointer2++;
	}
	return (0);
}
