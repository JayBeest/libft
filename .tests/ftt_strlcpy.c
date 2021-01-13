/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strlcpy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 16:12:44 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/08 16:12:21 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ftt_strlcpy()
{
	char	*src = NULL;
	char	dst[] = "Hierin";
	size_t	size = 2;
	
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
	return (0);
}
