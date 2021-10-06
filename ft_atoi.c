#include "libc_funcs.h"

int	ft_atoi(const char *str)
{
	long long		res;
	int				sign;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}
