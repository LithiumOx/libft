/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 16:38:11 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/30 11:59:02 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	dl;

	dl = ft_strlen(s);
	while (dl >= 0)
	{
		if (s[dl] == (char)c)
			return ((char *)s + dl);
		dl--;
	}
	return (NULL);
}
