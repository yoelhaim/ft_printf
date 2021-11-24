# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:51:12 by yoelhaim          #+#    #+#              #
#    Updated: 2021/11/24 13:12:44 by yoelhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
INC = ft_printf.h
AR := ar crs
FLAGS = -Wall -Wextra -Werror
REMOVE := rm -rf
SRCS = ft_putchar.c \
		ft_putnbr_base_ptr.c \
		putnbr_base.c writeptr.c \
    	ft_printf.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CRT) $@ $^
%.o: %.c
	cc $(FLAGS) -c $< -o $@


clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
