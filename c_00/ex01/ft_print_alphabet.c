/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:35 by ahatay            #+#    #+#             */
/*   Updated: 2021/11/24 14:43:40 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_putchar(char c)
{
		write(1,&c,1);
}

void 	ft_print_alphabet(void)
{
	char  a;
	a = 'a';

	while ( a < 'z')
	{
		ft_putchar(a);
		a++;
	}
}
