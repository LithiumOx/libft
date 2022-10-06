/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:07:25 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/06 17:10:20 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	*str;
	int		i;

	str = malloc(10);
	str = ft_memset(str, 'a', 10);
	i = 0;
	while (i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
