/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:21:47 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/11 23:42:00 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fa;

	fa = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fa = fa * nb;
		nb--;
	}
	return (fa);
}
