/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:45:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/24 19:23:48 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
static int countSize(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i++;
	if (!n)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}
int ft_putnbr(int n)
{
	long nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (countSize(n));
}
