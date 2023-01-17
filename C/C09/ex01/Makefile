CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCLUDES_DIR = includes

SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(SRCS:$(SRCS_DIR)/%.c=%.o)

.PHONY: all clean fclean re

all: libft.a

libft.a: $(OBJS)
    ar -rcs $@ $^
    ranlib $@

%.o: $(SRCS_DIR)/%.c
    $(CC) $(CFLAGS) -I$(INCLUDES_DIR) -o $@ -c $<

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f libft.a

re: fclean all
