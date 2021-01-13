/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strlcat.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli </var/spool/mail/jcorneli>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 15:02:48 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/08 14:27:35 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ftt_strlcat()
{
	char	str1[] = "Needles full";
	char	str2[] = " of Haystacks";

	ft_strlcat(str1, str2, 100);
	printf("%s\n", str1);
	return (1);
}

