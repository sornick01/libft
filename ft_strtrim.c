#include "libft.h"

static int	is_in_set(char sym, const char *set)
{
	while (*set != '\0')
	{
		if (sym == *set)
			return (1);
		set++;
	}
	return (0);
}

// static int	count_in_set(char const *s1, char const *set)
// {;}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	if (!s1)
		return ("");
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	if (set == NULL)
	{
		ft_strlcpy(str, s1, ft_strlen(s1) + 1);
		return (str);
	}
	i = 0;
	while (*s1 != '\0')
	{
		if (!is_in_set(*s1, set))
		{
			str[i] = *s1;
			i++;
		}
		s1++;
	}
	str[i] = '\0';
	return (str);
}
