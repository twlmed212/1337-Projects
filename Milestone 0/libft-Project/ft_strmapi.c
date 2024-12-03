#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = ft_strdup(s);
	if (result == NULL)
		return (NULL);
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}
