/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_isascii.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:34:43 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/07 12:22:05 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>
#include "libft.h"

int	ftt_isascii()
{
	int		i;

	i = -128;
	while (i < 128)
	{
		printf("isascii:    %d (%d)\n", isascii(i), i);
		printf("ft_isascii: %d (%d)\n", ft_isascii(i), i);
		i++;
	}
	printf("isascii:    %d (%d)\n", isascii('\0'), '\0');
	printf("ft_isascii: %d (%d)\n", ft_isascii('\0'), '\0');
	return (1);
}
