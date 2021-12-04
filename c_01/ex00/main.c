#include <stdio.h>

void    ft_ft(int *nbr);

int        main (void)
{
    int *x_nbr;
    int nbr;

    nbr = 21;
    x_nbr = &nbr;

    printf("%d\n", nbr);
    ft_ft(x_nbr);
    printf("%d\n", nbr);
    return (0);
}
