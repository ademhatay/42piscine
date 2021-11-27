/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:48:34 by ahatay            #+#    #+#             */
/*   Updated: 2021/11/27 21:50:09 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (++x <= 98)
	{
		y = x;
		while (++y <= 99)
		{
			ft_putchar((char)((x / 10) + '0'));
			ft_putchar((char)((x % 10) + '0'));
			ft_putchar(' ');
			ft_putchar((char)((y / 10) + '0'));
			ft_putchar((char)((y % 10) + '0'));
			if (x != 98 || y != 99)
			{
				write (1, ", ", 2);
			}
		}
	}
}
