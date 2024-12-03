/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:52:30 by mtawil            #+#    #+#             */
/*   Updated: 2024/11/30 23:56:04 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"


char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s+1);
		}
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

int check_line_complated(char *buffer)
{
    int i;
    i = 0;
    while(buffer[i])
    {
        if (buffer[i] == '\n')
            return (i + 1);
        i++;
    }
    return (0);
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *s)
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

char	*ft_strjoin(char *s1, char *s2)
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