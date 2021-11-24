#include <unistd.h>
void	 ft_putchar(char c)
{
	write(1,&c,1);
}

void	 ft_is_negative(int n)
{
	char 	c;
	char	p;
	c='N';
	p='P';

	if(n < 0)
	{
		ft_putchar(c);
	}
	else
	{
		ft_putchar(p);
	}
}

int main()
{
	ft_is_negative(-5);
	return 0;
}
