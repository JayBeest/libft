/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisfloat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorneli <marvin@codam.nl>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:11 by jcorneli          #+#    #+#             */
/*   Updated: 2021/11/24 15:03:11 by jcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strisfloat(const char *str)
{
	int	dot;

	dot = 0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str == '.' && dot == 0)
			dot = 1;
		else if (*str == '.')
			return (0);
		else if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
