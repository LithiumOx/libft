/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:19:51 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/06 16:47:20 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[100];

	printf("Which function do you want to test? \n");
	gets(str);
	if (ft_strncmp(str, "ft_memcmp", 9) == 0)
	{
		printf("ft_memcmp: %d\n", ft_memcmp("abc", "abc", 3));
		printf("memcmp: %d\n", memcmp("abc", "abc", 3));
	}
	else if (ft_strncmp(str, "ft_atoi", 7) == 0)
	{
		printf("ft_atoi: %d\n", ft_atoi("123"));
		printf("atoi: %d\n", atoi("123"));
	}
	else if (ft_strncmp(str, "ft_toupper", 10) == 0)
	{
		printf("ft_toupper: %c\n", ft_toupper('a'));
		printf("toupper: %c\n", toupper('a'));
	}
	else if (ft_strncmp(str, "ft_memset", 9) == 0)
	{
		printf("ft_memset: %s\n", ft_memset(str, 'a', 5));
		printf("memset: %s\n", memset(str, 'a', 5));
	}
	else
		printf("Function not found\n");
}
