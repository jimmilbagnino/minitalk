# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgalata <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 15:57:59 by rgalata           #+#    #+#              #
#    Updated: 2022/10/26 15:58:02 by rgalata          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_countdec.c ft_print_pointer.c ft_putnbr_fd.c\
	ft_countuns.c ft_print_str.c ft_putstr_fd.c ft_print_char.c\
	ft_print_hex.c ft_print_unsigned_int.c ft_printf.c\
	ft_print_int.c ft_putchar_fd.c ft_counthex.c ft_putunsnbr.c

OBJS	=	${SRCS:.c=.o}

AR = ar rcs

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

all:	${NAME}

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re