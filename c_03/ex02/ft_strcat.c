/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:13:38 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/05 14:13:42 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    a;

    i = 0;
    a = 0;
    while (dest[i] != '\0')
        i++;
    while (src[a] != '\0')
    {
        dest[i + a] = src[a];
        a++;
    }
    dest[i + a] = '\0';
    return (dest);
}
int main()
{
    char dizi1[] = "1234";
    char dizi2[] = "567890";
    
    printf("Dizilerin ilk hali:\nDizi1 = %s\nDizi2 = %s\n", dizi1, dizi2);
    ft_strcat(dizi1, dizi2);
    printf("-----------------------------\n");
    printf("Dizilerin Son hali:\nDizi1 = %s\nDizi2 = %s\n", dizi1, dizi2);
    // Son olarak dizi2 dizi1'in sonunda eklendi
    //Dizi1 aynı kaldı
}
