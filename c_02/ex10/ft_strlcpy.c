/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:33:37 by ahatay            #+#    #+#             */
/*   Updated: 2021/12/04 23:35:19 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

int        main(void)
{
  char dest1[] = "dest";
  char src1[] = "source";

  printf("%s\n%s\n\n", dest1, src1);
  ft_strlcpy(dest1, src1, 4);
  printf("%s\n%s", dest1, src1);
}
