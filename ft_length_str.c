#include "ft_h.h"

int		ft_length_str(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}
