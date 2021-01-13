/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_memcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:56:23 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/12 11:25:06 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#include <string.h>

int	ftt_memcpy()
{
	char	src[] = "Needle ful of Haystacks";
	char	dst[9];

	printf("memcpy:    %s\n", (char *)memcpy(dst, src, 9));
	printf("ft_memcpy: %s\n", (char *)ft_memcpy(dst, src, 9));
	return (1);
}
