/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 14:51:09 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/03 19:54:54 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	nlen = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if ((haystack[i] == *needle) && ft_strncmp(haystack + i, needle,
				nlen) == 0)
			if ((i + nlen) <= len)
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
