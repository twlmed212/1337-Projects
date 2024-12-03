#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	ltf;

	i = 0;
	ltf = ft_strlen(little);
	if (!big && !little)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((little[j]) && (i + j) < len && (big[i + j] == little[j]))
			j++;
		if (ltf == j)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
