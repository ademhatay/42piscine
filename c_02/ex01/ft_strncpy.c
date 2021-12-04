/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:40:22 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 14:22:49 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int c;

    c = 0;
    while ((src[c] != '\0') && (c < n))
    {
        dest[c] = src[c];
        c++;
    }
    while (c < n)
    {
        dest[c] = '\0';
        c++;
    }
    return (dest);
}

int        main(void)
{
    char dest1[] = "dest";
  char src1[] = "source";

  printf("%s\n%s\n\n", dest1, src1);
  ft_strncpy(dest1, src1, 3);
  printf("%s\n%s", dest1, src1);
}
