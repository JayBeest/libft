/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_tolower.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 14:35:35 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/07 15:43:48 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>
#include "libft.h"

int     ftt_tolower()
{
	int		i;

	i = -128;
	while (i < 128)
	{
		printf("tolower:    %c (%d)\n", tolower(i), i);
		printf("ft_tolower: %c (%d)\n", ft_tolower(i), i);
		i++;
	}
	return (1);
}
