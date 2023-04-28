/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:35:46 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/27 11:35:48 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"

void ft_putstr(char *str, int *counter)
{
	int i;
	while (str[i])
	{
		ft_putchar(str[i], counter);
		i++;
		counter += 1;
	}
}
