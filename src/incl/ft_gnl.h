#ifndef FT_GNL_H
# define FT_GNL_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

char	*ft_gnl(int fd);

typedef enum e_bool
{
	FALSE,
	TRUE
}			t_bool;

#endif
