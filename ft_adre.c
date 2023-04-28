#include "ft_printf.h"

void ft_char_adre(unsigned int modulo, int *counter)
{
        if (modulo == 10)
            write(1, "a", 1);
        else if (modulo == 11)
            write(1, "b", 1);
        else if (modulo == 12)
            write(1, "c", 1);
        else if (modulo == 13)
            write(1, "d", 1);
        else if (modulo == 14)
            write(1, "e", 1);
        else if (modulo == 15)
            write(1, "f", 1);
        *counter += 1;
}

void ft_hexa_adre(unsigned int num, int *counter)
{
    int modulo;

    modulo = 0;
    while (num != 0)
    {
        modulo = num % 16;
        num = num / 16;
        if (modulo >= 0 && modulo <= 9)
            ft_putnbr(modulo, counter);
        if (modulo >= 10 && modulo <= 15)
            ft_char_adre(modulo, counter);
    }
}

void ft_adre(void *a, int *counter)
{
    write(1, "0x", 2);
    *counter += 2;

    ft_hexa_adre((unsigned long int) a, counter);
}
