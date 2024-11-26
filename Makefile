CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS) $(TEST_OBJS)

fclean:
	rm -rf $(OBJS) $(NAME) $(TEST_DIR)/test

re: 
	$(MAKE) fclean
	$(MAKE) all
