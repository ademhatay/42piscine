/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:40:22 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 14:56:30 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int        main(void)
{
    char dest1[] = "dest";
  char src1[] = "source";

  printf("%s\n%s\n\n", dest1, src1);
  ft_strcpy(dest1, src1);
  printf("%s\n%s", dest1, src1);
}
