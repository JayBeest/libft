#include "libft.h"
#include <stdio.h>

int		ftt_itoba_nomalloc()
{
	char str[20];

	ft_itoba_nomalloc(789278798337838873, 16, str);
	printf("%s\n", str);
	printf("length: %d\n", (int)ft_strlen(str));
	return (0);
}