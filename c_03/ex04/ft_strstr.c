#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while(str[i + a] == to_find[a] && str[i + a] != '\0')
		{
			if (to_find[a + 1] == '\0')
				return (&str[i]);
			a++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char dizi1[] = "Bilgisayar";
	char dizi2[] = "isayar";
	char *res = ft_strstr(dizi1, dizi2);

	printf("%s karakter dizisinde bulunan dizi: %s, adresi: %p, indeksi:  %ld\n", dizi1, res,  res, res-dizi1);
}

