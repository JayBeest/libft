/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftt_isalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorneli <marvin@codam.nl>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:38:55 by jcorneli          #+#    #+#             */
/*   Updated: 2020/11/07 11:32:45 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>
#include "libft.h"
#include "test.h"

int	ftt_isalpha()
{
    int     i;

    i = -128;
    while (i < 128)
    {
        printf("isalpha:    %d (%d)\n", isalpha(i), i);
        printf("ft_isalpha: %d (%d)\n", ft_isalpha(i), i);
        i++;
    }
    printf("isalpha:    %d (%d)\n", isalpha('\0'), '\0');
    printf("ft_isalpha: %d (%d)\n", ft_isalpha('\0'), '\0');
    return(1);
}
