/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisvector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorneli <marvin@codam.nl>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:18 by jcorneli          #+#    #+#             */
/*   Updated: 2021/11/24 15:03:18 by jcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strisvector(const char *str)
{
	float	number;

	if (!ft_strisfloat(str))
		return (0);
	number = ft_atof(str);
	return (number >= -1 && number <= 1);
}
