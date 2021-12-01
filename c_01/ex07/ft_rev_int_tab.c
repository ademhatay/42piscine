#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	uppe;
	int	lowe;
	int	chang;

	uppe = 0;
	lowe = size -1;
	while (uppe < (size / 2))
{
		chang = tab[lowe];
		tab[lowe] = tab[uppe];
		tab[uppe] = chang;
		uppe++;
		lowe--;
	}
}

int main()
{
    int dizi[] = {12, 13, 54, 78, 877};
    for(int i = 0; i < 5; i++)
        printf("%d ", dizi[i]);
    ft_rev_int_tab(dizi,5);
    printf("\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", dizi[i]);
}
