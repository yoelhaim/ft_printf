/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:04:09 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/30 13:37:11 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

static void	print_printf(char format, const void *value, int *len)
{
	if (format == 's')
		*len += ft_putstr((char *)value);
	else if (format == 'd' || format == 'i')
		*len += ft_putnbr((int)value);
	else if (format == 'c')
		*len += ft_putchar((char)value);
	else if (format == 'p')
		*len += pointeur_print((void *)value);
	else if (format == 'u')
		*len += ft_putnbr_unsign((unsigned)value);
	else if (format == 'x')
		*len += ft_putnbr_base((unsigned int)value, "0123456789abcdef");
	else if (format == 'X')
		*len += ft_putnbr_base((unsigned int)value, "0123456789ABCDEF");
	else if (format == '%')
		*len += ft_putchar('%');
	printf("\nhelllllllo =====>%d\n",*len);
}

int	ft_printf(const char *frmt, ...)
{
	va_list	lst;
	void	*to_next;
	int		lenght;

	lenght = 0;
	va_start(lst, frmt);
	while (*frmt)
	{
		if (*frmt == '%')
		{
			frmt++;
			if (*frmt != '%')
				to_next = va_arg(lst, void *);
			print_printf(*frmt, to_next, &lenght);
		}
		else
			lenght += ft_putchar(*frmt);
		frmt++;
	}
	va_end(lst);
	return (lenght);
}
int main()
{
	// ft_printf("string => %s | dicimle => %%d | char=> %c  | pointeur => %p | hex => %x | HEX => %X \n","abcd", 1234, 'a',"abc", 0xC0, 0xC0);
	// printf("string => %s | dicimle => %d | char=> %c | pointeur => %p | hex => %x | HEX => %X \n","abcd", 1234, 'a',"abc", 0xC0, 0xC0);
ft_printf("%x",NULL);
// int c = ft_printf("%s\n", "ahmed");
// ft_printf("%d", c);
}
