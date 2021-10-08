// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// #define REDT printf("\x1b[31m")
// #define GRT printf("\x1b[32m")
// #define BT printf("\x1b[1m")
// #define DEFT printf("\x1b[0m")

// void	print_result(int test_num, int res)
// {
// 	BT;
// 	printf("Test [%d]...\n", test_num);
// 	if (res == 1)
// 	{
// 		GRT;
// 		printf("[SUCCESS]");
// 	}
// 	else if (res == 0)
// 	{
// 		REDT;
// 		printf("[ERROR]");
// 	}
// 	else
// 		printf("[WTF]\n");
// 	DEFT;
// 	printf("\n");
// }

// int		simple_test(void)
// {
// 	char	*str = "just simple text";
// 	char	sep = ' ';

// 	char	w1[] = "just";
// 	char	w2[] = "simple";
// 	char	w3[] = "text";

// 	char	*splitted[] = {w1, w2, w3, NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;

// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		spaces_begin_test(void)
// {
// 	char	*str = "  just simple text";
// 	char	sep = ' ';

// 	char	w1[] = "just";
// 	char	w2[] = "simple";
// 	char	w3[] = "text";

// 	char	*splitted[] = {w1, w2, w3, NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;

// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		spaces_end_test(void)
// {
// 	char	*str = "just simple text   ";
// 	char	sep = ' ';

// 	char	w1[] = "just";
// 	char	w2[] = "simple";
// 	char	w3[] = "text";

// 	char	*splitted[] = {w1, w2, w3, NULL};
// 	char	**ft_splitted = ft_split(str, sep);
	
// 	int		i;

// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		spaces_both_ends_test(void)
// {
// 	char	*str = "    just simple text ";
// 	char	sep = ' ';

// 	char	w1[] = "just";
// 	char	w2[] = "simple";
// 	char	w3[] = "text";

// 	char	*splitted[] = {w1, w2, w3, NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		only_spaces_test(void)
// {
// 	char	*str = "    ";
// 	char	sep = ' ';

// 	char	*splitted[] = {NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		one_word_test(void)
// {
// 	char	*str = "oneloooooooooongword";
// 	char	sep = ' ';

// 	char	w1[] = "oneloooooooooongword";

// 	char	*splitted[] = {w1, NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		nullptr_test(void)
// {
// 	char	*str = NULL;
// 	char	sep = ' ';

// 	char	*splitted[] = {NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		mid_spaces_test(void)
// {
// 	char	*str = "loooooooooongwrd";
// 	char	sep = 'o';

// 	char	w1[] = "l";
// 	char	w2[] = "ngwrd";

// 	char	*splitted[] = {w1, w2, NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 	{
// 		//printf("%s == %s\n", ft_splitted[i], splitted[i]);
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	}
// 	//printf("%s == %s\n", ft_splitted[i], splitted[i]);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		term_zero_test(void)
// {
// 	char	*str = "oneloooooooooongword";
// 	char	sep = '\0';

// 	char	w1[] = "oneloooooooooongword";

// 	char	*splitted[] = {w1, NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }

// int		empty_str_test(void)
// {
// 	char	*str = "";
// 	char	sep = ' ';

// 	char	*splitted[] = {NULL};
// 	char	**ft_splitted = ft_split(str, sep);

// 	int		i;
// 	for (i = 0; ft_splitted[i]; i++)
// 		if (strcmp(splitted[i], ft_splitted[i]))
// 			return (0);
// 	if (splitted[i] != NULL)
// 		return (0);
// 	return (1);
// }
// int		main(void)
// {
// 	print_result(1, simple_test());
// 	print_result(2, spaces_begin_test());
// 	print_result(3, spaces_end_test());
// 	print_result(4, spaces_both_ends_test());
// 	print_result(5, only_spaces_test());
// 	print_result(6, one_word_test());
// 	print_result(7, nullptr_test());
// 	print_result(8, mid_spaces_test());
// 	print_result(9, term_zero_test());
// 	print_result(10, empty_str_test());

// 	return (0);
// }
