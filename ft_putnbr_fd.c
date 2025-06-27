/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:50:12 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/26 18:59:22 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1, len);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', 1, len);
	}
	if (n >= 10)
		ft_putnbr_fd (n / 10, fd, len);
	ft_putchar_fd (n % 10 + '0', fd, len);
}
