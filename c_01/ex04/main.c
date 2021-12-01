#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int x = 80;
	int y = 12;
	int *a = &x;
	int *b = &y;

	printf("x = %d\t",x);
	printf("y = %d\n",y);

	ft_ultimate_div_mod(a, b);
	
	printf("*a  = %d\n",*a);
	printf("*b  = %d",*b);

}
