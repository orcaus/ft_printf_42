#include "printf_header.h"

void ft_char_maj(unsigned int modulo, int *counter)
{
        if (modulo == 10)
            write(1, "A", 1);
        else if (modulo == 11)
            write(1, "B", 1);
        else if (modulo == 12)
            write(1, "C", 1);
        else if (modulo == 13)
            write(1, "D", 1);
        else if (modulo == 14)
            write(1, "E", 1);
        else if (modulo == 15)
            write(1, "F", 1);
        counter += 1;
}

void ft_hexa_maj(unsigned int num, int *counter)
{
    int modulo;

    modulo = 0;
    while (num != 0)
    {
        modulo = num % 16;
        num += num / 16;
        if (modulo >= 0 && modulo <= 9)
            ft_putnbr(modulo, counter);
        if (modulo >= 10 && modulo <= 15)
            ft_char_maj(modulo, counter);
    }
}

