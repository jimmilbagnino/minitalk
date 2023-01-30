# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgalata <rgalata@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 15:17:44 by rgalata           #+#    #+#              #
#    Updated: 2023/01/30 15:17:46 by rgalata          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c

CLIENT = client.c

GCC = cc

FLAGS = -Wall -Werror -Wextra -g

NAME =  minitalk

NAME_SERVER = server

NAME_CLIENT = client

SRC_SERVER = $(SERVER)

SRC_CLIENT = $(CLIENT)

OBJ_SERVER = $(SRC    //ft_printf("\n");

server: make $(OBJ_SERVER)
	$(GCC) $(FLAGS) $(SRC_SERVER) -o $(NAME_SERVER)  ft_printf/libftprintf.a
	@echo "$(GREEN)server compilato con successo $(NO_COLOR)"
	
client: make $(OBJ_CLIENT)
	$(GCC) $(FLAGS) $(SRC_CLIENT) -o $(NAME_CLIENT) ft_printf/libftprintf.a
	@echo "$(GREEN)server compilato con successo $(NO_COLOR)"
clean:
	rm -rf $(OBJ_CLIENT) $(OBJ_SERVER)
	make -C ft_printf clean
	@echo "$(PURPLE)objs rimossi!\n $(NO_COLOR)"

fclean: clean
	rm -rf $(NAME_SERVER) $(NAME_CLIENT)
	make -C ft_printf fclean
	@echo "$(PURPLE)client e server rimossi!\n $(NO_COLOR)"
make:
	make -C ft_printf

re: fclean all

