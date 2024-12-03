#include "libft.h"
#include <stdio.h>

static int	total_words(char const *s, char c)
{
	int	i;
	int	words;
	int	found;

	i = 0;
	words = 0;
	found = 1;
	while (s[i])
	{
		if (s[i] == c && found == 0)
			found = 1;
		else if (s[i] != c && found == 1)
		{
			found = 0;
			words++;
		}
		i++;
	}
	return (words);
}

static void	free_memory(char **my_array, int i)
{
	while (i > 0)
		free(my_array[--i]);
	free(my_array);
}

static char	*get_next_word(const char **s, char c, int *start)
{
	int		end;
	char	*word;

	while (**s && **s == c)
		(*s)++;
	*start = *s - (*s);
	end = *start;
	while ((*s)[end] && (*s)[end] != c)
		end++;
	word = ft_substr(*s, *start, end - *start);
	*s += end;
	return (word);
}

static char	**fill_array(char **my_array, char const *s, int rows, char c)
{
	int		i;
	int		start;
	char	*word;

	i = 0;
	while (i < rows)
	{
		word = get_next_word(&s, c, &start);
		my_array[i] = word;
		if (!my_array[i])
		{
			free_memory(my_array, i);
			return (NULL);
		}
		i++;
	}
	return (my_array);
}

char	**ft_split(char const *s, char c)
{
	char	**my_array;
	int		rows;

	if (!s)
		return (NULL);
	rows = total_words(s, c);
	my_array = malloc((rows + 1) * sizeof(char *));
	if (!my_array)
		return (NULL);
	my_array = fill_array(my_array, s, rows, c);
	if (my_array)
		my_array[rows] = NULL;
	return (my_array);
}
