#include "ft_h.h"

int **count_num(int k, int n, int **num, int x)
{
    int i;
    int j;
    int flag;

    i = 1;
    j = 1;
    flag = 0;
    while(i < k)
    {
        while(j < n)
        {
            if(num[i][j] == x && num[i-1][j-1] >= x && num[i-1][j] >= x && num[i][j-1] >= x)
            {
                num[i][j]++;
                flag++;
            }
            j++;
        }
        j = 1;
		i++;
    }
	if(flag > 2)
        count_num(k, n, num, x+1);
//	biggest_num(num);
	return (num);
}
