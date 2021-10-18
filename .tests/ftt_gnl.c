#include "../libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	ftt_gnl(int argc, char **argv)
{
	char	*line;
	int		fd;

	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);

	line = ft_gnl(fd);
	while (line)
	{
		printf("GNL ->|%s|\n", line);
		free (line);
		line = ft_gnl(fd);
	}
	free(line);
//	system("leaks get_next_line");

//	line = get_next_line(fd);
//	printf("GNL2 ->|%s|\n", line);
//	free(line);
//	system("leaks get_next_line");
//
//	line = get_next_line(fd);
//	printf("GNL2 ->|%s|\n", line);
//	free(line);
//	system("leaks get_next_line");
//
//	line = get_next_line(fd);
//	printf("GNL2 ->|%s|\n", line);
//	free(line);
//	system("leaks get_next_line");

//	while ((line = get_next_line(fd)))
//	{
//		printf("GNL ->|%s|\n", line);
//	}
	return (0);
}
