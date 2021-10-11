#include <libft.h>

int	ft_strisvector(const char *str)
{
	float	number;

	if (!ft_strisfloat(str))
		return (0);
	number = ft_atof(str);
	return (number >= -1 && number <= 1);
}
