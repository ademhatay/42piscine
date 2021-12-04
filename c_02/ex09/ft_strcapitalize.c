/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:47:06 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 22:42:08 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char    *ft_strcapitalize(char *str)
{
    int    i;
    int a;

    i = 0;//counter str
    a = 1;//next big on
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9')) // only letters & nums
        {
            if (a  && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 32; // to upp lett. a==1
            else if (!a && (str[i] >= 'A' && str[i] <= 'Z')) // a!=1
                str[i] += 32; // to low lett.
            a = 0; // next big off
        }
        else
            a = 1; //next big onn
        i++;
    }
    return (str);
}

int main()
{
  char dizi1[] = "salut, comment tu vas ?armut 42mots quarante-deux; cinquante+et+un";
  printf("%s", ft_strcapitalize(dizi1));
  return 0;
}
