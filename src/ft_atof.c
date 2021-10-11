/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atof.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/02 15:37:08 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/05/02 15:38:22 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static double	get_double(const char *str, int sign)
{
	int		decimal;
	double	result;

	result = 0;
	decimal = 0;
	while (*str)
	{
		if (*str == '.')
			decimal = 1;
		else if (decimal > 0)
		{
			result = 10 * result + *str - '0';
			decimal *= 10;
		}
		else
			result = 10 * result + *str - '0';
		str++;
	}
	if (!decimal)
		decimal++;
	return (sign * result / decimal);
}

double	ft_atof(const char *str)
{
	int	sign;

	if (!str)
		return (-1);
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str == '0')
		str++;
	if (*str == '\0')
		return (0);
	return (get_double(str, sign));
}
