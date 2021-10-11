/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 15:42:27 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/02/18 12:18:50 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

static char	*cleanstr(const char *ptr, int *multip)
{
	while (*ptr && isspace(*ptr))
		ptr++;
	if (*ptr == '-')
	{
		*multip *= -1;
		ptr++;
	}
	else if (*ptr == '+')
		ptr++;
	return ((char *)ptr);
}

long	ft_atoi(const char *ptr)
{
	int		multip;
	long	retv;
	char	*str;

	retv = 0;
	multip = 1;
	if (!*ptr)
		return (0);
	str = cleanstr(ptr, &multip);
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
	{
		if (retv == 0)
			retv = *str - 48;
		else
			retv = retv * 10 + (*str - 48);
		str++;
	}
	return (retv * multip);
}
