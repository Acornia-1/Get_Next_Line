#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char *line;
	int fd;

	fd = open(argv[2], O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	free (line);
	close(fd);
	return (0); 
}