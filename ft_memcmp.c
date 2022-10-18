/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:13 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/08 13:16:39 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n <= 0)
		return (0);
	while (n-- > 0)
	{
		if (*((unsigned char *)s1++) != *((unsigned char *)s2++))
			return (*((unsigned char *)s1++) - *((unsigned char *)s2++));
		continue ;
	}
	return (0);
}

// int main(void)
// {
// 	ft_memcmp("t\200", "t\0", 2);
// }
