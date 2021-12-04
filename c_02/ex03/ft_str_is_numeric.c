/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:25:14 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 15:59:03 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int        main(void)
{
  char dizi[] = "merhabalar";
  char dizi2[] = "Merhabalar";
  char dizi3[] = "merhabalar123";
  char dizi4[] = "1231456";
  char dizi5[] = "";

  printf("%d\n", ft_str_is_numeric(dizi));
  printf("%d\n", ft_str_is_numeric(dizi2));
  printf("%d\n", ft_str_is_numeric(dizi3));
  printf("%d\n", ft_str_is_numeric(dizi4));
  printf("%d\n", ft_str_is_numeric(dizi5));
}
