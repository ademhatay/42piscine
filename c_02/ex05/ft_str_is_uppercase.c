/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:12:47 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 16:17:40 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
  char dizi2[] = "MEEEEE";
  char dizi3[] = "merhabalar123";
  char dizi4[] = "1231¤456";
  char dizi5[] = "";

  printf("%d\n", ft_str_is_uppercase(dizi));
  printf("%d\n", ft_str_is_uppercase(dizi2));
  printf("%d\n", ft_str_is_uppercase(dizi3));
  printf("%d\n", ft_str_is_uppercase(dizi4));
  printf("%d\n", ft_str_is_uppercase(dizi5));
}
