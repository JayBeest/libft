/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstclear.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 21:20:27 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/26 18:00:09 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test.h"
#include <stdlib.h>

static void	deli(void *elem)
{
	free(elem);
}

int		ftt_lstclear()
{
	t_list  *testlist;
	t_list	*nod;
//	t_list	*nod2;

	testlist = ft_lstnew(ft_strdup("test"));
	nod = testlist;
//	nod2 = testlist;
	ft_lstadd_back(&testlist, ft_lstnew(ft_strdup("test2")));
	ft_lstadd_back(&testlist, ft_lstnew(ft_strdup("test3")));
	ft_lstadd_back(&testlist, ft_lstnew(ft_strdup("test4")));
	
	while (nod)
	{
		printf("%s\n", (char *)nod->content);
		nod = nod->next;
	}
	ft_lstclear(&testlist, deli);
	return (1);
}
