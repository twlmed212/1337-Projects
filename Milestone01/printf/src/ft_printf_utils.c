#include "ft_printf.h"

int	check_formats(const char format, va_list arguments)
{
	int				count;
	unsigned long	temp;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(arguments, int));
	else if (format == 's')
		count += ft_putstr(va_arg(arguments, char *));
	else if (format == 'p')
	{
		temp = (unsigned long)va_arg(arguments, void *);
		if (!temp)
			return (ft_putstr("(nil)"));
		count += ft_putstr("0x");
		count += ft_putnbr_base_address(temp);
	}
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(arguments, int));
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(arguments, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_putnbr_base(va_arg(arguments, unsigned int), format);
	else
		count += ft_putchar(format);
	return (count);
}
