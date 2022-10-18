/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:17 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/08 12:58:40 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	i = 0;
	while (i++ < n)
		*(destination++) = *(source++);
	return (dst);
}
