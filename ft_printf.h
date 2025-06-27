/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:54:30 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/27 15:27:28 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(int c, int fd, int *len);
void	ft_putnbr_fd(int n, int fd, int *len);
void	ft_putunbr_fd(unsigned int n, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_puthex_fd(long n, int fd, int *len, char format);
void	ft_putmem_fd(void *ptr, int fd, int *len);

#endif