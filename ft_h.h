#ifndef FT_H_H
# define FT_H_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

int		ft_isspace(char c);
int		count_words(char *str);
char	*malloc_word(char *str);
char	**ft_split(char *str);
int		ft_length_str(char *str);
int		ft_display_file(char *str);
void	biggest_num(int k , int n, int **num);
int		**count_num(int k, int n, int **num, int x);

#endif
