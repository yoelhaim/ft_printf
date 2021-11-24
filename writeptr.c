/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:45:23 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/24 12:47:38 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    pointeur_print(void *p)
{
    unsigned long    x;

    x = (unsigned long)p;
    ft_putstr("0x");
    return (ft_putnbr_base_ptr(x, "0123456789abcdef") + 2);
}
