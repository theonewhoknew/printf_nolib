#include "ft_printf.h"
#include <unistd.h>

size_t ft_putadd(void *ptr)
{
	size_t len;
	unsigned char *p;
	unsigned char b;
	char string[] = "0123456789ABCDEF";
	size_t i;

	i = 0;
	len = 0;
	p = (unsigned char *) ptr;
	ft_putstr("0x");
	while (i < sizeof (ptr))
	{	
		b = *(p + i);
		ft_putchar("0123456789ABCDEF"[b >> 4]);
        ft_putchar("0123456789ABCDEF"[b & 0x0F]);
		i++;
        len += 2;
	}
	printf("address is %p\n", ptr);
	return (len + 2);
}