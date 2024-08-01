CC = cc
CFLAG = -Wall -Werror -Wextra
RM = rm -f

SRC = mini_f.c ft_itoa.c flag_reader.c util.c \
		ft_itohex.c
OUTPUT_NAME = a.out
OBJS = ${SRC:.c=.o}

all : ${OUTPUT_NAME}

%.o: %.c
	${CC} ${CFLAG} -c $< -o $@

${OUTPUT_NAME}: ${OBJS}
	${CC} ${CFLAG} ${OBJS} -o ${OUTPUT_NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${OUTPUT_NAME}

re: fclean all

.PHONY: all clean fclean re