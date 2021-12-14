/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:59:41 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/14 12:13:06 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int chang;

	i = 0;
	while (i < size)
	{
		while (tab[i] > tab[i + 1])
		{
			chang = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = chang;
			i = 0;
		}
		i++;
	}
}
// https://github.com/appinha/42sp-piscine/blob/master/c_piscine_c_01/ex08/t_main.c
void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	int size;

	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
