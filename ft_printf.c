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

#include "libft.h"

void ft_sort(const char*str, int i, va_list type)
{
	if (str[i] == c)
		
	else if (str[i] == s)
		ft_putchar(va_arg(list, char));
	else if (str[i] == p)
		ft_putstr(va_arg(list, char *));
	else if (str[i] == d)
		ft_putnbr(va_arg(list, int));
	else if (str[i] == i)
		ft_putnbr(va_arg(list, int));
	else if (str[i] == u)
		ft_putnbr(va_arg(list, unsigned int));
	else if (str[i] == x)
		
	else if (str[i] == X)
		
	else if (str[i] == %)
			write(1, %, 1);
}

int ft_printf(const char *str, ...)
{
	int i;
	va_list type;
	
	i = 0;
	if (str == NULL)
		return (NULL)
	va_start (type, str);
	while (str[i])
	{
		if (str[i] == %)
			ft_sort (str, i, type);
		i++;
	}
	va_end (type);
	return (i);
}
