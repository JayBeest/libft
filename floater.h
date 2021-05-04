/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   floater.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/02 15:36:55 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/05/02 15:36:57 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOATER_H
# define FLOATER_H

typedef union 	u_double
{
	double	value;
	struct
	{
		unsigned long long	mantissa : 52;
		unsigned int 		exponent : 11;
		unsigned int 		sign : 1;
	};
}				t_double;

#endif
