#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		if (*temp == (unsigned char)c)
		{
			return (temp);
		}
		i++;
		temp++;
	}
	return (NULL);
}
