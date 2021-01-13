/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strtrim.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 12:38:31 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/10 23:33:23 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ftt_strtrim()
{
	char	*str1;
	char	*set1;
	char	*print;
	
	str1 = "ggt   teststrin!/t";
	set1 = " /t   tg";
	print = ft_strtrim(str1, set1);
	printf("%s\n", print);
	free(print);
	str1 = "";
	set1 = "jjkke ";
	print = ft_strtrim(str1, set1);
	printf("%s\n", print);
	free(print);
	str1 = "   teststring   ";
	set1 = NULL;
	print = ft_strtrim(str1, set1);
	printf("%s\n", print);
	free(print);
	str1 = "";
	set1 = "    tg";
	print = ft_strtrim(str1, set1);
	printf("%s\n", print);
	free(print);
	return (1);
}
