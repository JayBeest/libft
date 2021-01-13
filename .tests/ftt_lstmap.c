/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstmap.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:56:54 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/01/09 15:05:46 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test.h"
#include <stdlib.h>

static void		*aba(void *content)
{
	int		i;
	void	*newcontent;

	newcontent = NULL;
	i = 0;
	while (((char *)content)[i])
	{
		if (i % 2)
			((char *)newcontent)[i] = 'a';
		else
			((char *)newcontent)[i] = 'b';
		i++;
	}
	((char *)newcontent)[i] = '\0';
	return (newcontent);
}

static void     del(void *elem)
{
        free(elem);
}

int             ftt_lstmap()
{
        t_list  *testlist;
        t_list  *nod;
		t_list	*nod2;
		t_list	*nod3;
		t_list	*nod4;

		free(NULL);
        testlist = ft_lstnew(ft_strdup("test"));
        nod = testlist;
        nod2 = testlist;
		nod4 = testlist;
        ft_lstadd_back(&testlist, ft_lstnew(ft_strdup("test2")));
        ft_lstadd_back(&testlist, ft_lstnew(ft_strdup("test3")));
        ft_lstadd_back(&testlist, ft_lstnew(ft_strdup("test4")));

        while (nod)
        {
                printf("%s\n", (char *)nod->content);
                nod = nod->next;
        }
		nod = ft_lstmap(testlist, aba, del);
		nod3 = nod;
        while (nod)
        {
                printf("%s\n", (char *)nod->content);
                nod = nod->next;
        }
        while (nod2)
        {
                printf("%s\n", (char *)nod2->content);
                nod2 = nod2->next;
        }
		ft_lstclear(&nod4, del);
		ft_lstclear(&nod3, del);
        return (1);
}
