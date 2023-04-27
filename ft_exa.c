void ft_exa(int num)
{
    int modulo;

    modulo = 0;
    while (num != 0)
    {
        modulo = num % 16;
        num += num / 16;
        if (modulo >= 0 && modulo <= 9)
            ft_putnbr(modulo);
        if (modulo >= 10 && modulo <= 15)

    }
}