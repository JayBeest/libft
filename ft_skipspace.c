/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_skipspace.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/25 23:13:49 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/04/25 23:13:58 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skipspace(char const *str)
{
	while (ft_isspace(*str))
		str++;
	return ((char *)str);
}
