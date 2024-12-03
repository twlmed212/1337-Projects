#include "libft.h"

void	*ft_memset(void *a, int c, int len)
{
	void	*b;

	b = a;
	while (len > 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
		len--;
	}
	return (a);
}
