#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int *********x_nbr;
	int ********x_nbr2;
	int *******x_nbr3;
	int ******x_nbr4;
	int *****x_nbr5;
	int ****x_nbr6;
	int ***x_nbr7;
	int **x_nbr8;
	int *x_nbr9;
	int nbr;

	nbr = 8888;

	x_nbr9 = &nbr;
	x_nbr8 = &x_nbr9;
	x_nbr7 = &x_nbr8;
	x_nbr6 = &x_nbr7;
	x_nbr5 = &x_nbr6;
	x_nbr4 = &x_nbr5;
	x_nbr3 = &x_nbr4;
	x_nbr2 = &x_nbr3;
	x_nbr = &x_nbr2;

	printf("%d\n", nbr);
	ft_ultimate_ft(x_nbr);
	printf("%d\n", nbr);
	return 0;
}
