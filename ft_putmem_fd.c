/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 14:13:43 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/27 19:26:38 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hex(unsigned long n, int fd, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_hex(n / 16, fd, len);
	ft_putchar_fd(hex[n % 16], fd, len);
}

void	ft_putmem_fd(void *ptr, int fd, int *len)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	if (!ptr)
	{
		ft_putstr_fd("(nil)", fd, len);
		return ;
	}
	ft_putstr_fd("0x", fd, len);
	ft_hex(addr, fd, len);
}
