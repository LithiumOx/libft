/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/06 18:02:30 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/06 18:12:48 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n >= 9)
	{
		n %= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		intlen;
	char	*ptr;

	intlen = ft_intlen(n);
	if (n < 0)
		intlen += 1;
	ptr = malloc(intlen);
	if (ptr == NULL)
		return (NULL);
	while (intlen != 0)
	{
		ptr[intlen] = (n % 10) + '0';
		n /= 10;
		intlen--;
	}
	if ()
}
