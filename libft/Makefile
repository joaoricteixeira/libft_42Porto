# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source, bonus and object files
SRCS = ft_atoi.c ft_putendl_fd.c ft_strlcpy.c ft_tolower.c \
ft_bzero.c ft_isprint.c ft_putnbr_fd.c ft_memchr.c \
ft_putstr_fd.c ft_strlen.c ft_toupper.c ft_calloc.c ft_itoa.c ft_memcmp.c \
ft_split.c ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strmapi.c \
ft_strncmp.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
ft_striteri.c ft_strrchr.c ft_isascii.c ft_memset.c ft_strjoin.c \
ft_strlcat.c ft_strtrim.c ft_isdigit.c ft_putchar_fd.c ft_substr.c 

BONUS_SRCS = ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
	  ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
OBJS = $(patsubst %.c,%.o,$(SRCS))
BONUS_OBJS = $(patsubst %.c,%.o,$(BONUS_SRCS))

# Library
NAME = libft.a

# Build Library
all: $(NAME)

$(OBJS) $(BONUS_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $<

# Build library (mandatory)
$(NAME): $(OBJS)
	ar rcs $@ $^

# Build library with bonus objects
bonus: $(OBJS) $(BONUS_OBJS)
	touch $@
	ar rcs $(NAME) $^

# Clean object files
clean:
	rm -f $(OBJS)

# Full clean (objects + library)
fclean: clean
	rm -f $(NAME) bonus

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
