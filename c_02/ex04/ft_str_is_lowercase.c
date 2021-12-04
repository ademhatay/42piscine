/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:00:09 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 16:08:02 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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

  printf("%d\n", ft_str_is_lowercase(dizi));
  printf("%d\n", ft_str_is_lowercase(dizi2));
  printf("%d\n", ft_str_is_lowercase(dizi3));
  printf("%d\n", ft_str_is_lowercase(dizi4));
  printf("%d\n", ft_str_is_lowercase(dizi5));
}
