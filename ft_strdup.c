/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 15:09:04 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/03 19:10:32 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1) + 1;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	else
		ft_strlcpy(ptr, s1, len);
	return (ptr);
}
