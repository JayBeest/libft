/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_strchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 18:12:22 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/10/31 18:32:11 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*strchr(const char *s, int c);

int	main()
{
	printf("%s\n", strchr("Haaaaal Maar uit!", 'M'));
	return (0);
}
