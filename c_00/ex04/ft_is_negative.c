/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:37:37 by ahatay            #+#    #+#             */
/*   Updated: 2021/11/25 13:58:39 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	c;
	char	p;

	c = 'N';
	p = 'P';
	if (n < 0)
	{
		ft_putchar(c);
	}
	else
	{
		ft_putchar(p);
	}
}
