/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:40:27 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/27 14:19:41 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	checkformat(va_list args, char c, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, len);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1, len);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1, len);
	else if (c == 'X' || c == 'x')
		ft_puthex_fd(va_arg(args, int), 1, len, c);
	else if (c == 'p')
		ft_putmem_fd(va_arg(args, void *), 1, len);
	else if (c == 'u')
		ft_putunbr_fd(va_arg(args, unsigned int), 1, len);
	else if (c == '%')
		ft_putchar_fd('%', 1, len);
	else
	{
		ft_putchar_fd('%', 1, len);
		ft_putchar_fd(c, 1, len);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			if (format[++i])
				checkformat(args, format[i], &len);
			else
				return (-1);
			i++;
		}
		ft_putchar_fd(format[i], 1, &len);
		i++;
	}
	va_end(args);
	return (len);
}
