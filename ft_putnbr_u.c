/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:00:11 by srajaoui          #+#    #+#             */
/*   Updated: 2023/05/01 18:00:14 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_rtn_u(unsigned int nbpos, int *counter)
{
	char	p;

	if (nbpos == 0)
	{
		return ;
	}
	ft_putnbr_rtn_u(nbpos / 10, counter);
	p = nbpos % 10 + '0';
	write(1, &p, 1);
	*counter += 1;
}

void	ft_putnbr_u(unsigned int nb, int *counter)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		*counter += 1;
		return ;
	}
	ft_putnbr_rtn_u(nb, counter);
}
