#include "libft.h"

void    ft_putendl_i(const char *s, int i)
{
    ft_putstr(s);
    ft_putnbr(i);
    ft_putchar('\n');
}