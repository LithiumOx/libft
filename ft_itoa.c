/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/06 18:02:30 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/10 20:41:18 by lithium       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		intlen;
	char	*ptr;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	intlen = ft_intlen(n);
	if (n < 0)
		intlen++;
	ptr = ft_calloc(sizeof(char), intlen + 1);
	if (ptr == NULL)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (n)
	{
		ptr[--intlen] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int		n;
// 	char	*ptr;

// 	n = 123456789;
// 	ptr = ft_itoa(n);
// 	printf("%s", ptr);
// 	return (0);
// }
