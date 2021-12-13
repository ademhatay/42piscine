/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:18:10 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/07 19:58:05 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Str parametresi ile gösterilen karakter dizisini int bir değere çevirir.
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '') + (res * 10);
		i++;
	}
	return (res * sign);
}
int main()
{
  char dizi[] = "-+------+41234";
  printf("%d", ft_atoi(dizi));
}
