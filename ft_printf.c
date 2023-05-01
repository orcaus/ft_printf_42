/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:59:34 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/20 16:27:33 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_sort(const char *str, int i, va_list type, int *counter)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(type, int), counter);
	else if (str[i] == 's')
		ft_putstr(va_arg(type, char *), counter);
	else if (str[i] == 'p')
		ft_adre(va_arg(type, void *), counter);
	else if (str[i] == 'd')
		ft_putnbr(va_arg(type, int), counter);
	else if (str[i] == 'i')
		ft_putnbr(va_arg(type, int), counter);
	else if (str[i] == 'u')
		ft_putnbr_u(va_arg(type, unsigned int), counter);
	else if (str[i] == 'x')
		ft_hexa_min(va_arg(type, unsigned int), counter);
	else if (str[i] == 'X')
		ft_hexa_maj(va_arg(type, unsigned int), counter);
	else if (str[i] == '%')
	{
		write(1, "%", 1);
		*counter += 1;	
	}	
}

int ft_printf(const char *str, ...)
{
	int i;
	int	counter;
	va_list type;
	
	i = 0;
	counter = 0;
	if (str == NULL)
		return (0);
	va_start (type, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_sort (str, i, type, &counter);
		}
		else
			ft_putchar(str[i], &counter);
		i++;
	}
	va_end (type);
	return (counter);
}
