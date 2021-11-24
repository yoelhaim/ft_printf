# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:51:12 by yoelhaim          #+#    #+#              #
#    Updated: 2021/11/24 19:45:15 by yoelhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = include/ft_printf.h
AR := ar crs
INCLUDES = -I./includes
FLAGS = -Wall -Wextra -Werror
REMOVE := rm -rf
SRCS = ft_printf.c \
		srcs/ft_putchar.c \
		srcs/ft_putnbr_base_ptr.c \
		srcs/putnbr_base.c \
		srcs/ft_putnbr_unsign.c \
		srcs/writeptr.c \
		srcs/ft_putnbr.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(AR) $@ $^
%.o: %.c
	cc $(FLAGS) -c $< -o $@


clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
