# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jcorneli <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/03/22 22:40:35 by jcorneli      #+#    #+#                  #
#   Updated: 2021/10/16 20:31:05 by jcorneli         ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRC =	ft_atoi.c \
		ft_atof.c \
		ft_count_split.c \
		ft_isdigit.c \
		ft_itoba_nomalloc.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strisfloat.c \
		ft_strisvector.c \
		ft_strlen.c \
		ft_strtoupper.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_free_split.c \
		ft_free_partial_split.c \
		ft_free_str.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isrg_bit.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_itoba.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_skipspace.c \
		ft_split.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strtolower.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_gnl.c \
		ft_gnl_utils.c

SRC_DIR =	src
OBJ_DIR =	$(SRC_DIR)/obj
INCL =		-I.
CFLAGS = -Wall -Wextra -Werror
CC = clang

O_FILES = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(O_FILES)
	@$(AR) -r $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@echo Compiling $@
	@$(CC) -c $(CFLAGS) $(INCL) -o $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
