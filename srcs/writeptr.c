/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:51:16 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/26 13:51:51 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	pointeur_print(void *p)
{
	unsigned long	x;

	x = (unsigned long)p;
	ft_putstr("0x");
	return (ft_putnbr_base_ptr(x, "0123456789abcdef") + 2);
}
