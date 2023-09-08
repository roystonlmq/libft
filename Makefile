LIB = libft

FILES = ft_strlen \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strncmp
CC = cc

CFLAGS = -Wall -Werror -Wextra

OUTPUT = $(LIB).a

CFILES = $(FILES:%=%.c)

OFILES = $(FILES:%=%.o)

NAME = $(OUTPUT)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I ./
	ar rc $(OUTPUT) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all, clean, fclean, re
