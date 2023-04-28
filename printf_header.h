#ifndef PRINTF_HEADER_H
# define PRINTF_HEADER_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>


int ft_printf(const char *str, ...);
void ft_putchar(int c, int *counter);
void ft_hexa_maj(unsigned int num, int *counter);
void ft_hexa_min(unsigned int num, int *counter);
void ft_putnbr(int nb, int *counter);
void ft_putstr(char *str, int *counter);
void ft_adre(void *a, int *counter);

#endif
