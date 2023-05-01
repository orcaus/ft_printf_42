/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_maj.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:05:33 by srajaoui          #+#    #+#             */
/*   Updated: 2023/05/01 18:05:34 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_maj(unsigned int num, int *counter)
{
	int		modulo;
	char	buff[25];
	int		a;

	a = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		*counter += 1;
	}
	while (num != 0)
	{
		modulo = num % 16;
		num = num / 16;
		buff[a++] = "0123456789ABCDEF"[modulo];
	}
	while (--a >= 0)
	{
		write (1, &buff[a], 1);
		*counter += 1;
	}
}
