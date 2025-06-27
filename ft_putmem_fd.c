/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 14:13:43 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/27 15:20:43 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	ft_puthex_fd(addr, fd, len, 'x');
}
