/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:24:11 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/01 14:24:20 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
int		main (void)
{
  int a = 5;
  int b = 2;

  int *div = &a;
  int *mod = &b;
  ft_div_mod(a, b, div, mod);

    printf("a  : %d",*div);
	printf("\nb : %d",*mod);
	return (0);
}
