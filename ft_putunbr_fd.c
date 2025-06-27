/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:28:31 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/26 18:46:19 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd, int *len)
{
	if (n >= 10)
		ft_putunbr_fd (n / 10, fd, len);
	ft_putchar_fd (n % 10 + '0', fd, len);
}
