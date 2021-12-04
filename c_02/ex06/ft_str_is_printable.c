/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:25:58 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 16:28:52 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
  char dizi4[] = "1231¤456";
  char dizi5[] = "";

  printf("%d\n", ft_str_is_printable(dizi));
  printf("%d\n", ft_str_is_printable(dizi2));
  printf("%d\n", ft_str_is_printable(dizi3));
  printf("%d\n", ft_str_is_printable(dizi4));
  printf("%d\n", ft_str_is_printable(dizi5));
}
