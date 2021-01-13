/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstdelone.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 12:56:14 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/14 13:39:22 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		del(void *elem)
{
	free(elem);
}

int		ftt_lstdelone()
{
	t_list	*testlist;
	
	testlist = ft_lstnew(ft_strdup("test"));
	ft_lstdelone(testlist, del);
	return (1);
}
