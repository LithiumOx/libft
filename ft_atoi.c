/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:06:51 by mdekker       #+#    #+#                 */
/*   Updated: 2022/11/18 18:24:17 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int	checkchar(char c, char *comparison)
{
	if (!(*comparison))
		return (0);
	else if (c == *comparison)
		return (1);
	return (checkchar(c, comparison + 1));
}

/**
 * INFO: Still have to add minimum int checking to remove unidentified behavior
*/
int	ft_atoi(const char *str)
{
	int	isneg;
	int	i;
	int	resint;

	isneg = 1;
	i = 0;
	resint = 0;
	while (checkchar(str[i], " \t\n\v\f\r"))
		i++;
	if (checkchar(str[i], "-+"))
	{
		if (str[i] == '-')
			isneg = -1;
		i++;
	}
	while (checkchar(str[i], "1234567890"))
	{
		resint = (resint * 10) + (str[i] - '0');
		i++;
	}
	return (resint * isneg);
}
