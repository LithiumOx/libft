/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:20 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/20 16:04:07 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*loop(char *dst, char *src, size_t len, size_t dir)
{
	size_t	i;

	i = 0;
	if (dir == 0)
	{
		while (i < len)
		{
			printf("src1: %d\n", src[i]);
			// printf("i: %zu dst: %p src: %p\n", i, dst, src);
			dst[i] = src[i];
			i++;
		}
	}
	else if (dir == 1)
	{
		i = len;
		while (i > 0)
		{
			printf("src2: %d\n", src[i]);
			// printf("i: %zu dst: %p src: %p\n", i, dst, src);
			dst[i] = src[i];
			i--;
		}
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*from;
	char	*to;

	to = (char *)dst;
	from = (char *)src;
	if (to < from)
		printf("this is the loop return1:	%s\n", (char *)loop(to, from, len,
						0));
	else if (to > from)
		printf("this is the loop return2:	%s\n", (char *)loop(to, from, len,
						1));
	return (dst);
}

int	main(void)
{
	char str[] = "1234567890";
	char	*str2;


	str2 = (char *)malloc(sizeof(char) * 10);
	ft_memmove(str2, str, 10);
	printf("\nthis is main str:	'%s'\n", str2);
}
