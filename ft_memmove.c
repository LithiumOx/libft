/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:20 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/20 03:05:48 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*loop(char *dst, char *src, size_t len, size_t dir)
{
	size_t	i;

	i = 0;
	if (dir == 0)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dir == 1)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*to;
	char	*from;

	to = (char *)dst;
	from = (char *)src;
	if (to < from)
		loop(to, from, len, 0);
	else if (to > from)
		loop(to, from, len, 1);
	return (dst);
}
