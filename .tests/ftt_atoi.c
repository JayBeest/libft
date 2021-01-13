/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ftt_atoi.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 15:15:51 by jcorneli      #+#    #+#                 */
/*   Updated: 2020/11/10 00:01:18 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
#include "libft.h"

int	ftt_atoi()
{
	printf("atoi:    %d (%s)\n", atoi("-2147483648"), "-2147483648");
	printf("ft_atoi: %d (%s)\n", ft_atoi("-2147483648"), "-2147483648");
	printf("atoi:    %d (%s)\n", atoi("2147483647"), "2147483647");
	printf("ft_atoi: %d (%s)\n", ft_atoi("2147483647"), "2147483647");
	printf("atoi:    %d (%s)\n", atoi("12"), "12");
	printf("ft_atoi: %d (%s)\n", ft_atoi("12"), "12");
	printf("atoi:    %d (%s)\n", atoi("--12"), "--12");
	printf("ft_atoi: %d (%s)\n", ft_atoi("--12"), "--12");
	printf("\x1b[0;33m");
	printf("over long long min by more than factor 10\n");
	printf("\x1b[0m");
	printf("real atoi: %i 	", atoi("-92233720368547758998"));
	printf("my atoi: %i\n", ft_atoi("-92233720368547758998"));
	printf("\x1b[0;33m");
	printf("over long long max by more than factor 10\n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("92233720368547758998"));
	printf("my atoi: %i\n", ft_atoi("92233720368547758998"));
	printf("\x1b[0;33m");
	printf("long long min\n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("-9223372036854775808"));
	printf("my atoi: %i\n", ft_atoi("-9223372036854775808"));
	printf("\x1b[0;33m");
	printf("long long max\n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("9223372036854775807"));
	printf("my atoi: %i\n", ft_atoi("9223372036854775807"));
	printf("\x1b[0;33m");
	printf("unsigned long long max value\n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("18446744073709551615"));
	printf("my atoi: %i\n", ft_atoi("18446744073709551615"));
	printf("\x1b[0;33m");
	printf("over unsigned long long max value by 1\n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("18446744073709551616"));
	printf("my atoi: %i\n", ft_atoi("18446744073709551616"));
	printf("\x1b[0;33m");
	printf("over unsigned long long maxby factor 10 or more \n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("184467440737095516167"));
	printf("my atoi: %i\n", ft_atoi("184467440737095516167"));
	printf("\x1b[0;33m");
	printf("over unsigned long long maxby factor 10 or more \n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("184467440737095516117"));
	printf("my atoi: %i\n", ft_atoi("184467440737095516117"));
	printf("\x1b[0;33m");
	printf("over int max \n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("21474836478"));
	printf("my atoi: %i\n", ft_atoi("21474836478"));
	printf("\x1b[0;33m");
	printf("under int min \n");
	printf("\x1b[0m");
	printf("real atoi: %i	", atoi("-21474836478"));
	printf("my atoi: %i\n", ft_atoi("-21474836478"));
	return (1);
}
