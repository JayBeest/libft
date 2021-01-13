/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_isprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:53:42 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/07 13:28:45 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>
#include "libft.h"

int	ftt_isprint()
{
	int		i;

	i = -128;
	while (i < 128)
	{
		printf("isprint:    %d (%d)\n", isprint(i), i);
		printf("ft_isprint: %d (%d)\n", ft_isprint(i), i);
		i++;
	}
	return (1);
}
