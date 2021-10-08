#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			words++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (words);
}

static char	*get_word(const char **s, char c)
{
	char	*word;
	size_t	i;
	size_t	len;

	i = 0;
	while ((*s)[i] != '\0' && (*s)[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	len = i;
	i = 0;
	while (**s && i < len)
	{
		word[i] = **s;
		(*s)++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**alloc_mem(char const *s, char c)
{
	char	**tab;
	size_t	words;

	words = count_words(s, c);
	if (!words)
		return (NULL);
	tab = (char **)ft_calloc((words + 1), sizeof(char *));
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;

	if (!s)
		return (NULL);
	// tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	tab = alloc_mem(s, c);
	if (!tab)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			tab[i] = get_word(&s, c);
			if (!tab[i])
			{
				//free_tab(tab, i);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	return (tab);
}
