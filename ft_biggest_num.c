#include "ft_h.h"

void biggest_num(int k, int n, int **num)
{
    int i;
    int j;
    int fl_i;
    int fl_j;
    int max;

    i = 0;
    j = 0;
    max = num[i][j];
    while (i < k)
    {
        while (j < n)
        {
            if (num[i][j] > max)
            {
                max = num[i][j];
                fl_i = i;
                fl_j = j;
            }
            j++;
        }
		j = 1;
        i++;
    }
	//printf("%d and %d", fl_i, fl_j);

	int		p = num[fl_i][fl_j] - 1; // 3

	i = 0;
	j = 0;

	while (j <= p)
	{
		while (i <= p)
		{	
			num[fl_i - j][fl_j - i] = '.';
			i++;
		}
		i = 0;
		j++;
	}
}
