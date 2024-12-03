/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:24:57 by mtawil            #+#    #+#             */
/*   Updated: 2024/11/26 23:05:39 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_base_address(unsigned long nbr);
int	ft_putnbr_base(unsigned int nbr, char format);
int	ft_putchar(char c);
int	check_formats(const char format, va_list arguments);
int	ft_printf(const char *str, ...);
int	ft_putnbr_unsigned(unsigned int nb);
#endif