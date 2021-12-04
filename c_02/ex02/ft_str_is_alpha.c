/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:25:14 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 14:26:36 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_alpha(char *str)
{
    unsigned int i;

  i = 0;
    while (str[i] != '\0')
  {
    if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int        main()
{
    char abc1[] = "SAasdasdnandfksamfldsmcdsmglrnfvnfdvmfknvfdlb";

    char abc0[] = "qwhdfeopwf55";

    char abc11[] = "";

    printf("%d\n", ft_str_is_alpha(abc1));
    printf("%d\n", ft_str_is_alpha(abc0));
    printf("%d\n", ft_str_is_alpha(abc11));

    return 0;
}


