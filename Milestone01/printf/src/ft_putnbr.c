/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:25:15 by mtawil            #+#    #+#             */
/*   Updated: 2024/11/26 23:21:58 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	temp;
	int		count;

	count = 0;
	temp = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
			return (ft_putstr("-2147483648"));
		nb *= -1;
		count += ft_putchar('-');
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	temp = (nb % 10) + '0';
	return (count + ft_putchar(temp));
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	char	temp;
	int		count;

	count = 0;
	temp = 0;
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	temp = (nb % 10) + '0';
	return (count + ft_putchar(temp));
}
