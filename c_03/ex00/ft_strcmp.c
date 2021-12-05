/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:10:21 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/05 12:00:55 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);

}
int main( void )
{
  char dizi[] = "12345678";
  char dizi1[] = "123456789";

	printf("dizi: %s \n", dizi);
	printf("dizi1: %s\n",  dizi1);

  int result = strcmp(dizi, dizi1);
  int ft_result = ft_strcmp(dizi, dizi1);

	printf("strcmp: %d \n", result);
  printf("ft_strcmp: %d \n", ft_result);

  if(result<0) printf("dizi , dizi1karakter dizisinden küçüktür!");
  else if(result>0) printf("dizi1 , dizi karakter dizisinden küçüktür!");
  else printf("dizi, dizi1 karakter dizisine eşittir!");
  return 0;
}
