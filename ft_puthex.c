/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:27:46 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/16 09:32:35 by dtome-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

size_t	ft_puthex(int n, char *base)
{
	long	number;
	size_t	count;	
	size_t	len_base;

	len_base = ft_strlen(base);
	count = 0;
	number = 0;
	number = n;
	if (number < 0)
	{
		number *= -1;
		ft_putchar('-');
	}
	if (number >= (long) len_base)
	{
		ft_puthex(number / len_base, base);
		ft_puthex(number % len_base, base);
	}
	if (number < (long) len_base)
	{	
		ft_putchar(base[number]);
		count++;
	}
	return (count);
}
