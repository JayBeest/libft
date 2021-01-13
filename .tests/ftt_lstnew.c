/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstnew.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 16:53:45 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/13 23:17:22 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ftt_lstnew()
{
	char 	*str1 = "Deze";
	t_list	*nlist;

	nlist = ft_lstnew(str1);
	printf("%s\n", (char *)nlist->content);
	free (nlist);

	return (1);
}
