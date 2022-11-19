/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/17 15:03:20 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/19 18:49:44 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (*s)
	{
		if (*s != c && found == 0)
		{
			found = 1;
			i++;
		}
		else if (*s == c && found == 1)
			found = 0;
		s++;
	}
	return (i);
}

static int	getwordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	// if (!arr)
	// 	return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			arr[i] = ft_substr(s, 0, getwordlen(s, c));
			i++;
			s += getwordlen(s, c);
		}
		else
			s++;
	}
	arr[i] = NULL;
	return (arr);
}

int	main(void)
{
	char	*str;
	char	**arr;
	int		i;

	str = "lorem ipsum dolor sit amet";
	arr = ft_split(str, ' ');
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
