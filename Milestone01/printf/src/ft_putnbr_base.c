#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char format)
{
	int		count;
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_base(nbr / 16, format);
	}
	count += ft_putchar(base[nbr % 16]);
	return (count);
}

int	ft_putnbr_base_address(unsigned long nbr)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_base_address(nbr / 16);
	}
	count += ft_putchar(base[nbr % 16]);
	return (count);
}
