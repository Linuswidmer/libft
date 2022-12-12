# SRCS = ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c
SRCS =ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strdup.c ft_strmapi.c ft_striteri.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c 
FILENAMES = ft_isalpha ft_isdigit ft_isprint ft_isascii ft_isalnum ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_itoa ft_strdup ft_strmapi ft_striteri ft_strlcpy
OBJECTS =ft_isalpha.o ft_isdigit.o ft_isprint.o ft_isascii.o ft_isalnum.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o ft_strdup.o ft_strmapi.o ft_striteri.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o	ft_strncmp.o ft_strnstr.o ft_atoi.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o 
# OBJS = ${SRCS: .c=.o}
HEADER = libft.h
NAME = libft
CFLAGS = -Werror -Wall -Wextra

.c.o:
	cc -c ${SRCS} ${HEADER} -o ${OBJS}

${NAME}:
	cd sources && \
	cc ${CFLAGS} -c ${SRCS} -I ../includes/ && \
	ar rc ../libft.a ${OBJECTS} && \
	ranlib ../libft.a && \
	cd ../

all: ${NAME}

libft.a: all

clean:
	cd sources && \
	rm -f ${FILENAMES} *.o

.PHONY: clean

fclean: 
	rm -f ${NAME}

re: fclean all
