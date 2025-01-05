CC = gcc

FLAGS = -Wall -Wextra -Werror

LIBRARY = libft.a

FILES = atoi bzero \
		tolower toupper \
		isalnum isalpha isascii isdigit isprint \
		memchr memcmp memcpy memmove memset \
		strchr strdup strjoin strlcat strlcpy strlen strncmp strnstr strrchr strtrim substr

CFILES = $(FILES:%=ft_%.c)
OBJ = $(FILES:%=ft_%.o)

all:
	$(CC) $(FLAGS) -c $(CFILES) -I./
	ar -r $(LIBRARY) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all

.PHONY: all, clean, fclean, re