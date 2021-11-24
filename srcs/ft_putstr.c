/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:45:06 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/24 18:56:38 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int    ft_putstr(char *s)
{
    char    *ptr;

    if (!s)
        return (ft_putstr("(null)"));
    ptr = s;
    while (*s)
        ft_putchar(*(s++));
    return (s - ptr);
}
