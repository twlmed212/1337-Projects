#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
