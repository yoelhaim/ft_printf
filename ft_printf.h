/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:32:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/24 13:01:10 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr_base_ptr(unsigned long nb, char *base);
int	ft_putnbr(int n);
int	ft_putnbr(int n);
int ft_putstr(char *str);
int	ft_putnbr_base(int nbr, char *base);
int	pointeur_print(void *p);
int ft_printf(const char *frmt, ...);
int ft_strlen(char *s);

#endif
