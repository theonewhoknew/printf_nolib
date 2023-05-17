/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:28:52 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/16 09:31:31 by dtome-pe         ###   ########.fr       */
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
<<<<<<< HEAD
size_t	ft_puthexnbr(unsigned int n, char *base);
=======
size_t	ft_puthex(int n, char *base);
>>>>>>> 08eadd20ab50f3dcacbfd947d7a1e3f9d2cabc86
size_t	ft_putnbr(int n);
size_t	ft_putstr(char *s);
size_t	ft_putunbr(unsigned int n);

#endif