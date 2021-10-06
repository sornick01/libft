#include "libc_funcs.h"

void	test()
{
	char	buf1[25565] = "hello dimasik";
	char	str1[25565] = "nu zdarova";
	char	buf2[25565] = "hello dimasik";
	char	str2[25565] = "nu zdarova";

	printf("%d %s\n", ft_strlcpy(buf1, str1, 2), buf1);
	printf("%d %s\n", strlcpy(buf2, str2, 2), buf2);
	// printf("%d %s\n", ft_strlcat(buf1, str1, sizeof(buf1)), buf1);
	// printf("%d %s\n", strlcat(buf2, str2, sizeof(buf2)), buf2);
}

void tst_substr()
{
	char str[] = "requires further verification because we did not recognize";
	char *sub = ft_substr(str, 9, 124);
	printf("%s", sub);
}

int	main(void)
{
	test();
	//tst_substr();
}
