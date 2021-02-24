/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_itoba.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 11:45:27 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/02/10 14:21:08 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ftt_itoba()
{
	char	*test;
//	long long 	i;

//	i = (signed long) + 0;
//	printf("%lld\n", i);
	test = ft_itoba(1234567890, 10, 1);
//	printf("test = ft_itoa(-234)\n");
	printf("%s\n", test);
	free (test);
	test = ft_itoba(1234567890, 16, 1);
//	printf("test = ft_itoa(-234)\n");
	printf("%s\n", test);
	free (test);
	return (1);
}
