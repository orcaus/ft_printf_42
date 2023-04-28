#include "ft_printf.h"
/*
void ft_char_min(unsigned int modulo, int *counter)
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
*/
void ft_hexa_min(unsigned int num, int *counter)
{
    int modulo;

    modulo = 0;
    if (num == 0)
    {
    	write(1, "0", 1);
    	*counter += 1;
    }
    while (num != 0)
    {
        modulo = num % 16;
        num = num / 16;
        if (modulo >= 0 && modulo <= 9)
		ft_putnbr(modulo, counter);
        if (modulo >= 10 && modulo <= 15)
        {
        	modulo = modulo - 10 + 'a';
        	write(1, &modulo, 1);
        	*counter += 1;
        }
    }
}
/*

int main()
{
	unsigned int num;
	int counter;
	
	num = 10;
	counter = 0;
	ft_hexa_min(num, &counter);
}*/
