/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:28:52 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/18 08:49:39 by dtome-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>

size_t	check_conversions(va_list args, char const *str);
int		ft_printf(char const *str, ...);
size_t	ft_strlen(const char *s);
size_t	ft_putadd(void *ptr);
size_t	ft_putchar(char c);
size_t	ft_hex(unsigned int n, char *base);
size_t	ft_putnbr(int n);
size_t	ft_putstr(char *s);
size_t	ft_putunbr(unsigned int n);
int		ft_isprint(int c);

#endif