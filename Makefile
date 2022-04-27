NAME = libft00.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
    ft_strlcat.c

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
    ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

ifeq ($(MAKECMDGOALS),bonus)
    SRCS += $(BSRCS)
endif

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

bonus: $(BOBJS)

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus clean fclean re all