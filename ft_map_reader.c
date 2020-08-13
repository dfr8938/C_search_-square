#include "ft_h.h"

char *map_reade(char *map_name)
{
	int		file;
	char	chr;
	char	*chr_map;
	int 	i;
	i = 0;
	chr_map = (char*)malloc(sizeof(map_name) + 1);
	file = open(map_name, O_RDONLY, 0);
	while (read(file, &chr, 1))
	{
		chr_map[i] = chr;
		i++;
	}
	chr_map[i] = '\0';
	close(file);
	return chr_map;
}
