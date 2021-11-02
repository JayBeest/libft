#include <stdlib.h>

void	ft_free_str(char *str)
{
	if (!str)
		return ;
	free(str);
	str = NULL;
}