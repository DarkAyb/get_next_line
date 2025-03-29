NAME = get_next_line

SRC = get_next_line.c get_next_line_utils.c

OBJS = ${SRC:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}
	
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	${RM} ${OBJS}

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re