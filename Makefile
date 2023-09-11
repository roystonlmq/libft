LIB = libft

FILES = ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_strlen \
		ft_strlcat \
		ft_strlcpy \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_memset \
		ft_memmove \
		ft_memcpy \
		ft_atoi	\
		ft_strnstr \
		ft_calloc \
		ft_bzero \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi

CC = cc

CFLAGS = -Wall -Werror -Wextra

OUTPUT = $(LIB).a

NORMTEST = norminette

CFILES = $(FILES:%=%.c)

OFILES = $(FILES:%=%.o)

NAME = $(OUTPUT)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I ./
	ar rc $(OUTPUT) $(OFILES)

$(NORMTEST):
	$(NORMTEST) $(CFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all, clean, fclean, re
