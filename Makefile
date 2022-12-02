# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 12:56:59 by ide-la-i          #+#    #+#              #
#    Updated: 2022/12/02 15:47:50 by ide-la-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Declarar "variables"
NAME = libft.a # Nombre del archivo

CC = gcc # Compilador que se utiliza

CFLAGS = -Wall -Wextra -Werror # Flags que lleva

SOURCE = $(shell find . -name "*.c") # Script que va a usar para tomar los archivos a ompilar

OBJS = $(SOURCE:.c=.o) # Script que genera los objetos a partir de los c

LIB = ar rc $(NAME) # Comando para generar la librería segun el pdf

RANLIB = ranlib $(NAME) # Indexa la librería

RM = rm -f # Script para borrar

# "Programar" acciones de makefile
all: $(NAME)

# Si te fijas son como "atajos de terminal". El @$(CC)... es equivalente a poner "gcc -Wall -Wextra -Werror -c $(shell find . -name "*.c")"
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SOURCE)
	@$(LIB) $(OBJS)
	@$(RANLIB) $(NAME)

# Limpiar archivos intermedios, hay muchas capas para asegurar
clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re





