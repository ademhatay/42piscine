/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:20:22 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/15 15:49:47 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*r;

	i = 0;
	r = malloc(sizeof(int *) * (max - min));
	if (r == NULL)
		return (0);
	if (max <= min)
	{
		r = NULL;
		return (0);
	}
	while (min < max)
	{
		r[i] = min;
		i++;
		min++;
	}
	return (r);
}
