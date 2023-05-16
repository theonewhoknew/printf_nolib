/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:26:21 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/16 13:56:21 by dtome-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{	
	char	*str;

	str = "hola";
	ft_printf("dirección es %p\n", str);
	//printf("cinco en hexadecimal es %x", 50);
}
