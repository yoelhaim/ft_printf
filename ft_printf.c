/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:04:09 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/24 12:49:56 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printPrintf(char  format,const void *value, int *len)
{
	if (format == 's')
		*len += ft_putstr((char *) value);
	else if (format == 'd' || format == 'i')
		*len += ft_putnbr((int) value);
	else if (format == 'c')
		ft_putchar((char)value);
	else if (format == 'p')
		*len += pointeur_print((void *)value);
	else if(format == '%')
		ft_putchar('%');

}

int ft_printf(const char *frmt, ...)
{
	va_list	lst;
	void	*to_next;
	int		lenght;

	lenght = 0;
	va_start(lst, frmt);
	while(*frmt)
	{
		if(*frmt == '%')
		{
			frmt++;
			if(*frmt != '%')
				 to_next = va_arg(lst, void *);
            printPrintf(*frmt, to_next, &lenght);

		}
		else
           lenght = ft_putchar(*frmt);
        frmt++;
	}
	va_end(lst);
	return(lenght);
}
#include <stdio.h>
int main()
{
	 ft_printf("string => %s | dicimle => %d | char=> %c | pointeur => %p \n","abcd", 1234, 'a',"abc");
	  printf("string => %s | dicimle => %d | char=> %c | pointeur => %p \n","abcd", 1234, 'a',"abc");

}
