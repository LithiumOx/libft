/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lithium <lithium@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 20:00:13 by lithium       #+#    #+#                 */
/*   Updated: 2022/11/12 09:55:45 by lithium       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		memspace;
	char	*ptr;

	memspace = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(memspace * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	ptr[memspace - 1] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;

// 	s1 = "Dit is    ";
// 	s2 = "een test \n";
// 	s3 = ft_strjoin(s1, s2);
// 	printf("%s", s3);
// 	return (0);
// }
