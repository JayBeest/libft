/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strjoin.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 11:03:43 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/03 16:01:02 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ftt_strjoin()
{
	const char	str1[] = "Haystack ";
	const char	str2[] = "full of Needles to nowhere";

	printf("%s\n", ft_strjoin(str1, str2));
	return (1);
}
