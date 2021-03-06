NAME = libft.a

HEADER = libft.h

FILES = ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c \
ft_calloc.c ft_isascii.c ft_memchr.c  ft_memmove.c ft_strchr.c  ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c \
ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_substr.c \
ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_FILES = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
ft_lstnew.c ft_lstsize.c

OBJ = $(FILES:%.c=%.o)

OBJ_BONUS = $(BONUS_FILES:%.c=%.o)

DEPS = $(OBJ:%.o=%.d)

DEPS_BONUS = $(OBJ_BONUS:%.o=%.d)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

-include $(DEPS)
%.o : %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

bonus:	
	make OBJ="$(OBJ_BONUS)" all

clean:
	rm -f $(OBJ) $(DEPS) $(OBJ_BONUS) $(DEPS_BONUS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean bonus
