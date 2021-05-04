/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_atof.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/02 17:52:12 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/05/02 17:53:56 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int	ftt_atof(void)
{
	t_double	num;
	char 		*str = "1.5";

	num.value = 0;
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	num.value = 1;
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	num.value = 0.5;
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	num.value = 1.5;
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	num.value = ft_atof(str);
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	num.value = 2;
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	num.value = 10;
	printf("num.value: %f\n", num.value);
	printf("sign: %u\nexponent: %u\nfraction: %llu\n", num.parts.sign, num.parts.exponent, num.parts.fraction);
	return (0);
}
