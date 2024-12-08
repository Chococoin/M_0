# Nombre de la biblioteca
NAME = libft.a

# Archivos fuente
SRCS = $(wildcard *.c)

# Archivos objeto
OBJS = $(patsubst %.c, %.o, $(SRCS))

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Regla para compilar la biblioteca
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Regla para compilar archivos objeto
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos objeto y la biblioteca
clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) ft_test

# Regla para recompilar todo
re: fclean all

# Regla por defecto
all: $(NAME)

# Regla para compilar ft_test
ft_test: ft_test.o libft.a
	$(CC) $(CFLAGS) -o ft_test ft_test.o libft.a

.PHONY: all clean fclean re