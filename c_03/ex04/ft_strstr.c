#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
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
	char str[] = "ankara";
	char toFind[] = "kar";
	printf("%s", ft_strstr(str, toFind));
}
