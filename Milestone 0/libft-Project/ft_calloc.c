#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;
	size_t	i;

	i = 0;
	x = (char *)malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)x)[i] = 0;
		i++;
	}
	return (x);
}
