/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:40:01 by mpeanuts          #+#    #+#             */
/*   Updated: 2021/08/08 19:40:02 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc_funcs.h"

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
			{
				i++;
			}
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (NULL);
}
