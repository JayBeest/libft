/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strmapi.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 23:13:31 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/17 20:01:51 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	aba(unsigned int i, char c)
{
	c = 'a';
	if (i == 0)
		return(c);
	if (i % 2)
		return(ft_toupper('b'));
	else
		return('a');
}



int		ftt_strmapi()
{
	char	*teststr;

	teststr = ft_strmapi("maak er wat van", aba);
	printf("%s\n", teststr);
	free (teststr);
	return (1);
}
