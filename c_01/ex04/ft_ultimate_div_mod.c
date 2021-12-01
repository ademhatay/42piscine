/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:09:52 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/01 15:31:09 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	result_mod;

	if (*b != 0)
	{
		result = *a / *b;
		result_mod = *a % *b;
		*a = result;
		*b = result_mod;
	}
}
