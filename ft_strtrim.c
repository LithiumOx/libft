/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lithium <lithium@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/12 10:54:51 by lithium       #+#    #+#                 */
/*   Updated: 2022/11/17 17:09:03 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchar(char c, const char *comparison)
{
	if (!(*comparison))
		return (0);
	else if (c == *comparison)
		return (1);
	return (checkchar(c, comparison + 1));
}

static int	get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (checkchar(s1[i], set))
		i++;
	return (i);
}

static int	get_end(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (checkchar(s1[len - 1], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0' || set[0] == '\0')
		return (ft_strdup(s1));
	start = get_start(s1, set);
	end = get_end(s1, set);
	return (ft_substr(s1, start, end - start));
}
