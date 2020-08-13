#include "ft_h.h"


int		main(int argc, char **argv)
{
char **arr;
char *str;
char *src;
char *dest;
char c;
int x = 0;
int f = open(argv[1], O_RDONLY);

// длина всей мапы
while (read(f, &c, 1))
	x++;
close(f);
int m = x;
// запись всей мапы в чар массив
f = open(argv[1], O_RDONLY);
dest = (char *)malloc(x + 1);
x = 0;
while (read(f, &c, 1))
{
	dest[x] = c;
	x++;
}
dest[x] = '\0';
close(f);
// длина первой подстроки в чар массиве
x = 0;
while (dest[x])
{
	if (dest[x] != '\n')
		x++;
	else
		break;
}
// запись первой подстроки в отдельный массив
int b = x + 2;
str = (char *)malloc(x + 1);
x = 0;
while (dest[x])
{
	if (dest[x] != '\n')
	{
		str[x] = dest[x];
		x++;
	}
	else
		break;
}
// запись валидной мапы в другой массив
src = (char *)malloc(m - b + 1);
x = 0;
while (dest[x])
{
	src[x] = dest[b];
	x++;
	b++;
}

// обработка массива с цифрами и символами
// нахождение числа вхождений чисел в массив
x = 0;
while (str[x])
{
	if (str[x] >= '0' && str[x] <= '9')
		x++;
	else
		break;
}
// запись в массив чисел
char *nu = (char *)malloc(x + 1);
x = 0;
while (str[x])
{
	if (str[x] >= '0' && str[x] <= '9')
	{
		nu[x] = str[x];
		x++;
	}
	else
		break;
}
//  запись символов в массив
x = ft_length_str(str);
int l = ft_length_str(nu);

int d = x - l;
x = 0;
char *st = (char *) malloc(d + 1);
while (str[x])
{
	st[x] = str[d - 1];
	x++;
	d++;
}

arr = ft_split(src);

// строки
int i = ft_length_str(*arr);
int k = 0;
int j = 1;
int n = 1;

// столбцы

while (arr[k])
	k++;

j = 0;
int **numb = (int **)malloc(k * sizeof(int *));

while (j < i)
{
	numb[j] = (int *)malloc(i * sizeof(int));
	j++;
}

j = 0;
n = 0;
while (j < k)
{
  n = 0;
  while (n < i)
  {
    if (arr[j][n] == st[0])
	{
      arr[j][n] = '1';
	  numb[j][n] = 1;
	}
    else if (arr[j][n] == st[1])
	{
      arr[j][n] = '0';
	  numb[j][n] = 0;
	}
    n++;
  }
  j++;
}

biggest_num(k, i, count_num(k, i, numb, 1));

j = 0;
n = 0;
while (j < k)
{
	n = 0;
	while (n < i)
	{
		if (numb[j][n] == st[0])
		{
			arr[j][n] = st[2];
		}
		else if (arr[j][n] == '0')
			arr[j][n] = st[1];
		else if (arr[j][n] == '1')
		{
			arr[j][n] = st[0];
		}
		n++;
	}
	j++;
}

n = 0;
j = 0;
while (j < k)
{
  n = 0;
  while (n < i)
  {
    write(1, &arr[j][n], 1);
    n++;
  }
  write(1, "\n", 1);
  j++;
}
}
