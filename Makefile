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
	@rm -f $(NAME)

# Regla para recompilar todo
re: fclean $(NAME)

# Regla por defecto
all: $(NAME)

.PHONY: all clean fclean re