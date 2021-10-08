NAME = libft.a

HEADER = libft.h

FILES = ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c \
ft_calloc.c ft_isascii.c ft_memchr.c  ft_memmove.c ft_strchr.c  ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c \
ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_substr.c ft_split.c

OBJ = $(FILES:%.c=%.o)
DEPS = $(OBJ:%.o=%.d)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

-include $(DEPS)
%.o : %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	rm -f $(OBJ) $(DEPS)
fclean: clean
	rm -f $(NAME)
re: fclean all
