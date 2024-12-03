/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:25:05 by mtawil            #+#    #+#             */
/*   Updated: 2024/11/26 23:03:38 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		i;
	int		count;

	va_start(arguments, str);
	count = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += check_formats(str[i + 1], arguments);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
