/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jcorneli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:36:37 by jcorneli      #+#    #+#                 */
/*   Updated: 2021/05/02 17:54:29 by jcorneli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include "libft.h"

int		ftt_memset();
int		ftt_memcpy();
int		ftt_strlcpy();
int		ftt_strnstr();

int		ftt_strlcat();

int		ftt_isalpha();
int		ftt_isdigit();
int		ftt_isalnum();
int		ftt_isascii();
int		ftt_isprint();
int		ftt_toupper();
int		ftt_tolower();
int		ftt_atoi();
int		ftt_atof();

int		ftt_substr();
int		ftt_strjoin();
int		ftt_strtrim();
int		ftt_split();
int		ftt_itoa();

int		ftt_itoba();
int		ftt_itoba_nomalloc();
int		ftt_strtolower();

int		ftt_strmapi();
int		ftt_putchar_fd();
int		ftt_putstr_fd();
int		ftt_putendl_fd();
int		ftt_putnbr_fd();

int 	ftt_lstnew();
int 	ftt_lstsize();
int		ftt_lstlast();
int		ftt_lstadd_back();
int		ftt_lstdelone();
int		ftt_lstclear();
int		ftt_lstiter();
int		ftt_lstmap();

#endif
