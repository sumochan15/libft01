NAME = libft00.a

SRCS = ft_atoi.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c  ft_tolower.c ft_toupper.c 

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