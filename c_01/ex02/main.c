#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int x  = 9;
	int y  = 6;
	int *a = &x;
	int *b = &y;

	ft_swap(a, b);
	printf("x 6 = %d\n",*a);
	printf("y 9 = %d",*b);
}
