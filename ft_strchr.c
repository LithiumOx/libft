/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:11:27 by mdekker       #+#    #+#                 */
/*   Updated: 2022/10/18 16:18:21 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	char chr;

	chr = (char)c;
	if (!(*s))
		return (0);
	else if (chr == *s)
		return ((char *)s);
	return (ft_strchr(s + 1, c));
}
