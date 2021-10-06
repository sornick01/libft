#include "libc_funcs.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	n;

	n = dstsize;
	i = 0;
	j = 0;
	while (dst[i] != '\0' && dstsize--)
		i++;
	dst_len = i;
	if (dst_len == 0)
		return (ft_strlen(src));
	while (i < n - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (strlen(src) + dst_len);
}
