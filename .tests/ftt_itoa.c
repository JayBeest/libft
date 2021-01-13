/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_itoa.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:00:52 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/10 15:00:20 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ftt_itoa()
{
	char	*test;
//	long long 	i;

//	i = (signed long) + 0;
//	printf("%lld\n", i);
	test = ft_itoa(-2326018);
//	printf("test = ft_itoa(-234)\n");
	printf("%s\n", test);
	free (test);
	return (1);
}
