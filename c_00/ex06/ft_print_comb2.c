#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_put(int w)
{
    if (w > 9)
    {
        ft_put(w / 10);
    }
    ft_putchar((w % 10) + '0');
}

void    ft_put2(int b, int a)
{
    if (b < 10)
    {
        ft_putchar('0');
    }
    ft_put(b);
    ft_putchar(' ');
    if (a < 10)
    {
        ft_putchar('0');
    }
    ft_put(a);
    if (!(b == 98 && a == 99))
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb2(void)
{
    int    a;
    int    b;

    b = 0;
    while (b < 99)
    {
        a = b + 1;
        while (a < 100)
        {
            if (b != a)
            {
                ft_put2(b, a);
            }
            a++;
        }
        b++;
    }
}
int main(){
    ft_print_comb2();
    return 0;
}
