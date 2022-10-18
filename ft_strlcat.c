/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:28 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/12 13:03:12 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dest_len;
	size_t src_len;
	dest_len = (size_t)ft_strlen(dst);
	src_len = (size_t)ft_strlen(src);
	while (dstsize > 0 && *src != '\0')
	{
		dst[dest_len] = *src;
		src++;
		dest_len++;
		dstsize--;
	}
	return (dest_len + src_len);
	// printf("Dest lenght: %zu \n src lenght: %zu\n dstsize: %zu", dest_len, src_len, dstsize);
	// return (1);
}

// int main(void)
// {
// 	ft_strlcat("test", "test", 10);
// }
