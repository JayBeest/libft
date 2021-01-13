/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_isalnum.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:27:36 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/07 11:43:04 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>
#include "libft.h"

int	ftt_isalnum()
{
	int		i;

	i = -128;
	while (i < 128)
	{
		printf("isalnum:    %d (%d)\n", isalnum(i), i);
		printf("ft_isalnum: %d (%d)\n", ft_isalnum(i), i);
		i++;
	}
	printf("isalpha:    %d (%d)\n", isalnum('\0'), '\0');
	printf("ft_isalpha: %d (%d)\n", ft_isalnum('\0'), '\0');
	return (1);
}
