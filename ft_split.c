/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/17 15:03:20 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/20 03:03:13 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **strs, int i)
{
	while (i >= 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
	return (NULL);
}

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

static int	getwordlen(char const *s, unsigned int start, char c)
{
	while (s[start] != c)
	{
		if (s[start] == '\0')
			return (start);
		start++;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			arr[i] = ft_substr(s, j, getwordlen(s, j, c) - j);
			if (!arr[i])
				return (ft_free(arr, i));
			i++;
			j = getwordlen(s, j, c);
		}
		else
			j++;
	}
	return (arr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	**arr;
// 	int		i;

// 	str = "      split       this for   me  !       ";
// 	arr = ft_split(str, ' ');
// 	i = 0;
// 	while (arr[i])
// 	{
// 		printf("%d -> %s\n", i, arr[i]);
// 		i++;
// 	}
// 	printf("\nwordcount: %d\n", wordcount(str, ' '));
// }
