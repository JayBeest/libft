/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_isdigit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 20:11:18 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/07 11:37:05 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>
#include "libft.h"

int	ftt_isdigit()
{
	int     i;

	i = -128;
	while (i < 128)
	{
		printf("isdigit:  %d (%d)\n", isdigit(i), i);
		printf("ft_digit: %d (%d)\n", ft_isdigit(i), i);
		i++;
	}
	printf("isdigit:    %d (%d)\n", isdigit('\0'), '\0');
	printf("ft_isdigit: %d (%d)\n", ft_isdigit('\0'), '\0');
	return (1);
}
