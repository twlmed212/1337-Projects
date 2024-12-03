#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	save;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return ;
		}
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	save = n % 10 + '0';
	ft_putchar_fd(save, fd);
}
