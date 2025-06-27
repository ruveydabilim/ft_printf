/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:22:48 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/27 14:26:47 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_puthex_fd(long n, int fd, int *len, char format)
{
	char	*hex;

	if (format == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n < 0)
	{
		n += 4294967295;
	}
	if (n >= 16)
	{
		ft_puthex_fd(n / 16, fd, len, format);
	}
	ft_putchar_fd(hex[n % 16], fd, len);
}
