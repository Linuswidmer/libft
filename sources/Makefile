# SRCS = ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c
SRCS =ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strdup.c ft_strmapi.c ft_striteri.c ft_strlcpy.c
OBJS = ${SRCS: .c=.o}
HEADER = libft.h
NAME = libft
CFLAGS = -Werror -Wall -Wextra

.c.o:
	cc -c ${SRCS} ${HEADER} -o ${OBJS}

${NAME}: ${OBJS}
	cc ${CFLAGS} ${OBJS} -o ${NAME}

test:
	cc ${CFLAGS} ${SRCS} -o test -lbsd && ./test && rm test

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
