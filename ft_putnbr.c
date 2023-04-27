void	ft_putnbr_rtn(unsigned int nbpos)
{
	char	p;

	if (nbpos == 0)
	{
		return ;
	}
	ft_putnbr_rtn(nbpos / 10);
	p = nbpos % 10 + '0';
	write(1, &p, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbpos;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nbpos = -nb;
	}
	else
	{
		nbpos = nb;
	}
	ft_putnbr_rtn(nbpos);
}