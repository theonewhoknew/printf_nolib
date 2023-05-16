/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:28:29 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/16 14:02:19 by dtome-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

size_t	ft_putadd(void *ptr)
{
	const char *hex;
	unsigned long address;
	char buffer[sizeof(void*) * 2 + 3];
	size_t count;
	int index;

	index = sizeof(void*) * 2 + 2;
	buffer[index] = '\0';
	address = (unsigned long) ptr;

    while (index > 1) 
	{	
		index--;
        buffer[index] = "0123456789ABCDEF"[address & 0xF];
        address >>= 4;
    }
    buffer[0] = 'x';
    buffer[1] = '0';
	count = ft_putstr(buffer);
	return (count)
;}
