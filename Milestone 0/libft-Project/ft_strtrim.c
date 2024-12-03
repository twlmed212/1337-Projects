#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s;
	size_t	i;

	i = 0;
	if (!*s1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[i]) && s1[i])
	{
		i++;
	}
	len_s = ft_strlen(s1);
	while (ft_strchr(set, s1[len_s - 1]) && len_s > i)
	{
		len_s--;
	}
	return (ft_substr(s1, i, len_s - i));
}
