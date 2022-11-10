/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lithium <lithium@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 14:10:32 by lithium       #+#    #+#                 */
/*   Updated: 2022/11/10 15:01:01 by lithium       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	shiftinascii(unsigned int d, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= d;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char	ptr[50];

// 	ft_memset(ptr, 'x', 20);
// 	ft_striteri(ptr, shiftinascii);
// 	printf("%s", ptr);
// }
