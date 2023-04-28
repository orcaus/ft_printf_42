#include "printf_header.h"

void	ft_putnbr_rtn(unsigned int nbpos, int *counter)
{
	char	p;

	if (nbpos == 0)
	{
		return ;
	}
	ft_putnbr_rtn(nbpos / 10, counter);
	p = nbpos % 10 + '0';
	write(1, &p, 1);
	counter += 1;
}

void	ft_putnbr(int nb, int *counter)
{
	unsigned int	nbpos;

	if (nb == 0)
	{
		write(1, "0", 1);
		counter += 1;
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		counter += 1;
		nbpos = -nb;
	}
	else
	{
		nbpos = nb;
	}
	ft_putnbr_rtn(nbpos, counter);
}