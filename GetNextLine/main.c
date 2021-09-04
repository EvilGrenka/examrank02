#include "get_next_line.h"

int main () 
{
    int		r;
	char	*line;

	line = NULL;
	while ((r = get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s", line);
	free(line);
}