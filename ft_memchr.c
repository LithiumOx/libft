/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:09 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/15 14:25:13 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	chr;

	chr = (char)c;
	if (n <= 0)
		return (0);
	if (!(*((unsigned char *)s)))
		return (0);
	else if (chr == *((unsigned char *)s))
		return ((unsigned char *)s);
	return (ft_memchr(s + 1, c, n - 1));
}
