/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:11:45 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/11 19:28:19 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cc;
	int	cv;

	if (argc < 2)
		return (0);
	cc = argc - 1;
	while (cc > 0)
	{
		cv = 0;
		while (argv[cc][cv])
		{
			write(1, &argv[cc][cv], 1);
			cv++;
		}
		write(1, "\n", 1);
		cc--;
	}
	return (0);
}
