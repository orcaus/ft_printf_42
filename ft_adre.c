#include "ft_printf.h"

void ft_hexa_adre(unsigned long int num, int *counter)
{
	int modulo;
	char buff[25];
	int a;
	
	a = 0;
	if (!num)
	{
		write(1, "(nil)", 5);
		*counter += 5;
	}
	while (num != 0)
	{
		modulo = num % 16;
		num = num / 16;
		buff[a++] = "0123456789abcdef"[modulo];
	}
	while (--a >= 0)
	{
		write (1, &buff[a], 1);
		*counter += 1;
	}
}

void ft_adre(void *num, int *counter)
{
	if (num)
	{
		write(1, "0x", 2);
		*counter += 2;
	}
    ft_hexa_adre((unsigned long int) num, counter);
}
