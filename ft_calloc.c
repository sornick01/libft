#include "libc_funcs.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(size * count);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, count);
	return (mem);
}
