/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strtolower.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 23:08:52 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/02/24 23:15:34 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <unistd.h>

int		ftt_strtolower()
{
		char	str[] = "HELLO! TRAVELER 4675";

		printf("%s\n", str);
		ft_strtolower(str);
		printf("%s\n", str);
		return (1);
}
