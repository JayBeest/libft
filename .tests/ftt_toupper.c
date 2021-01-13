/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_toupper.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 14:33:18 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/07 15:41:40 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#include <ctype.h>

int	ftt_toupper()
{
	int		i;

	i = -128;
	while (i < 128)
	{
		printf("toupper:    %c (%d)\n", toupper(i), i);
		printf("ft_toupper: %c (%d)\n", ft_toupper(i), i);
		i++;
	}
	return (1);
}
