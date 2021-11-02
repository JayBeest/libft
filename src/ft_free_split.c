#include <stdlib.h>

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free (split[i]);
		split[i] = NULL;
		i++;
	}
	free (split);
	split = NULL;
}
