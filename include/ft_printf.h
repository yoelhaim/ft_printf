/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:32:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/12/02 13:06:39 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# define HEXLOW "0123456789abcdef"
# define HEXUP "0123456789ABCDEF"

int	ft_putchar(char c);
int	ft_putnbr_base_ptr(unsigned long nb, char *base);
int	ft_putnbr(int n);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putnbr_base(long nbr, char *base);
int	pointeur_print(void *p);
int	ft_printf(const char *frmt, ...);
int	ft_strlen(char *s);
int	ft_putnbr_unsign(unsigned int n);

#endif
