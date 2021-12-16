/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:50:49 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/16 13:02:09 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		a;
	int		b;
	int		c;
	int		d;

	a = 0;
	d = 0;
	dest = (char *)malloc(sizeof(strs));
	if (!dest)
		return (NULL);
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			dest[d++] = strs[a][b++];
		}
		c = 0;
		while (sep[c] != '\0' && a < size - 1)
			dest[d++] = sep[c++];
		a++;
	}
	dest[d] = '\0';
	return (dest);
}

int main(void)
{
  char *dizi[] = {"adem","hatay","Hatayspor", "deneme"};
  char sep[] = " -------- ";
  char *t;
  t = ft_strjoin(5, dizi, sep);
  printf("%s", t);
}
