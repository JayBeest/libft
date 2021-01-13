/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftt_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorneli <marvin@codam.nl>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:27:23 by jcorneli          #+#    #+#             */
/*   Updated: 2020/11/08 16:33:57 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

#include <strings.h>

int	ftt_strnstr()
{
	char	big[] = "Haystack full of Needles to nowhere.";
	char	little[] = "to";
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";

	char	*i1 = ft_strnstr(s1, s2, 9);
	char	*i2 = ft_strnstr(s1, s2, 9);

	printf("strnstr:    %s\n", i1);
	printf("ft_strnstr: %s\n\n", i2);

	printf("Searching 3: %s\n", ft_strnstr(big, little, 3));
	printf("Searching 20: %s\n", ft_strnstr(big, little, 20));
	printf("Searching 100: %s\n", ft_strnstr(big, little, 100));

	return (1);
}
