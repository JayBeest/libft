/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstadd_back.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 23:41:53 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/13 23:00:41 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ftt_lstadd_back()
{
	t_list  *testlist;
	int             i;

	testlist = ft_lstnew("Ori");
	i = 0;
	while (i < 5)
		{
			ft_lstadd_front(&testlist, ft_lstnew("content"));
			i++;
		}
	printf("size: %d\n", ft_lstsize(testlist));
	ft_lstadd_back(&testlist, ft_lstnew("aanteind"));
	printf("new size: %d\n", ft_lstsize(testlist));
	testlist = ft_lstlast(testlist);
	printf("content last: %s\n", (char *)testlist->content);
	free (testlist);
	return (1);
}
