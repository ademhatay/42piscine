/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:10:35 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/05 12:32:45 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);

}
int main( void )
{
  char dizi[] = "12345678";
  char dizi1[] = "123456789";

	printf("dizi: %s \n", dizi);
	printf("dizi1: %s\n",  dizi1);

  int result = strncmp(dizi, dizi1, 9);
  int ft_result = ft_strncmp(dizi, dizi1, 3);

	printf("strncmp: %d \n", result);
  printf("ft_strncmp: %d \n", ft_result);

  if(result<0) printf("dizi , dizi1karakter dizisinden küçüktür!\n");
  else if(result>0) printf("dizi1 , dizi karakter dizisinden küçüktür!\n");
  else printf("dizi, dizi1 karakter dizisine eşittir!\n");

  if(ft_result<0) printf("FT_RESULT: dizi , dizi1karakter dizisinden küçüktür!");
  else if(ft_result>0) printf("FT_RESULT: dizi1 , dizi karakter dizisinden küçüktür!");
  else printf("FT_RESULT: dizi, dizi1 karakter dizisine eşittir!");
  return 0;
}
