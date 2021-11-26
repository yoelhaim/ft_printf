/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:45:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/26 13:42:05 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	countsize(unsigned	int n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_putnbr_unsign(unsigned int n)
{
	unsigned long	nb;

	nb = (long)n;
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (countsize(nb));
}
