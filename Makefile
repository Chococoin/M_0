NAME = libft.a

MAIN_SRCS = $(filter-out ft_lst%.c, $(wildcard *.c))

BONUS_SRCS = $(wildcard ft_lst*.c)

OBJS = $(patsubst %.c, %.o, $(MAIN_SRCS))

BONUS_OBJS = $(patsubst %.c, %.o, $(BONUS_SRCS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS)

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re