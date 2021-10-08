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

static size_t	count_len_of_word(const char *s, char c, char *tab)
{
	size_t	word_len;

	word_len = 0;
	while (*s != '\0' && *s != c)
	{
		word_len++;
		s++;
	}
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	word_len;
	size_t	i;
	size_t	j;

	if (!s)
	{
		tab = (char **)malloc(sizeof(char *));
		*tab = (char *)malloc(sizeof(char));
		*tab = NULL;
		return (tab);
	}
	words = count_words(s, c);
	if (words == 0)
	{
		tab = (char **)malloc(sizeof(char *));
		tab[0] = (char *)malloc(sizeof(char));
		tab[0] = NULL;
		return (tab);
	}
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s && i < words)
	{
		while (*s == c && *s != '\0')
			s++;
		word_len = count_len_of_word(s, c);
		tab[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!tab[i])
			return (NULL);
		j = 0;
		while (*s != c && *s != '\0')
		{
			tab[i][j] = *s;
			s++;
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
