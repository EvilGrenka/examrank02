# include "get_next_line.h"


int		get_next_line( char **line)
{
    int readed;
    int i = 0;
    
    *line = malloc(4 * 1024 * 1024);
    if (!line)
        return (-1);
    
    while (((readed = read(0, *line + i, 1)) > 0))
    {
        if ((*line)[i] == '\n')
            break ;
        i++;
    }
    (*line)[i] = '\0';
    return (readed);
}
