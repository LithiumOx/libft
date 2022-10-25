/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 16:38:11 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/25 15:12:59 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	dl;

	dl = ft_strlen(s);
	while (dl--)
		if (c == s[dl])
			return ((char *)s + dl);
	return (NULL);
}

// int main()
// {
// 	printf("%s", ft_strrchr("Hello World", 'o'));
// }
