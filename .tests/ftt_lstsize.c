/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_lstsize.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 22:30:08 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/17 22:49:18 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ftt_lstsize()
{
	t_list	*testlist;
	int		i;

	testlist = ft_lstnew("Ori");
	i = 5;
	while (i > 0)
	{
		ft_lstadd_front(&testlist, ft_lstnew("Content"));
		i--;
	}
	printf("size: %d\n", ft_lstsize(testlist));
	printf("size: %d\n", ft_lstsize(testlist));
	free (testlist);
	return (1);
}
