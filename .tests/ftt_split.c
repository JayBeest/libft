/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_split.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 15:38:59 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/12/19 20:05:48 by dvan-kri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

int		ftt_split()
{
	char	str1[] = "      split       this  for me !!!!! ";
	char	del = ' ';
	char	**print;
	size_t	i;

	print = ft_split(str1, del);
	i = 0;
//	printf("test:%s\n", print[1]);
	 while (print[i])
	{
		printf("%s|\n", print[i]);
		free(print[i]);
		i++;
	}
	printf("%s|\n", print[i]);
	free (print);
	return (0);
}
