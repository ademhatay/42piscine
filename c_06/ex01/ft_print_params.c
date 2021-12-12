/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:58:08 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/11 19:01:09 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cc;
	int	cv;

	if (argc < 2)
		return (0);
	cc = 1;
	while (cc < argc)
	{
		cv = 0;
		while (argv[cc][cv])
		{
			write(1, &argv[cc][cv], 1);
			cv++;
		}
		write(1, "\n", 1);
		cc++;
	}
	return (0);
}
