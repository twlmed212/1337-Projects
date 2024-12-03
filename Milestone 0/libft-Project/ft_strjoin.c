#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	result = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < (s1_len + s2_len))
	{
		if (i < s1_len)
			result[i] = s1[i];
		if (i < s2_len)
			result[s1_len + i] = s2[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
