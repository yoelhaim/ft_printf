/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:45:17 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/28 21:35:23 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	check_base(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

int	ft_putnbr_base(long nb, char *base)
{
	long long	n;
	int			len;

	len = 0;
	if (nb < 0)
	{
		len++;
		ft_putchar ('-');
		nb = nb * -1;
	}
	n = nb;
	if (nb <= (long)ft_strlen(base) -1)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / 16, base);
		ft_putnbr_base(nb % 16, base);
	}
	return (len + check_base(n));
}
