/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstlast.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 23:14:20 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/12 23:40:45 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ftt_lstlast()
{
	t_list  *testlist;
	int		i;
	
	testlist = ft_lstnew("Ori");
	i = 0;
		while (i < 5)
			{
				ft_lstadd_front(&testlist, ft_lstnew("content"));
				i++;
			}
		printf("size: %d\n", ft_lstsize(testlist));
		testlist = ft_lstlast(testlist);
		printf("size from last: %d\n", ft_lstsize(testlist));
		free (testlist);
		return (1);
}
