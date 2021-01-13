/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_substr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:44:45 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/03 11:03:35 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ftt_substr()
{
	const char	str1[] = "A needle from an invisible haystack";
	unsigned int	start = 4;
	size_t		len = 6;

	printf("%s\n", ft_substr(str1, start, len));

	return (1);
}
