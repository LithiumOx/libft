# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mdekker <mdekker@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/05 15:23:33 by mdekker       #+#    #+#                  #
#    Updated: 2022/11/20 12:32:43 by mdekker       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re run test

CC=cc
CFLAGS=-Wall -Wextra -Werror $(if $(DEBUG),-g -fsanitize=address)
NAME=libft.a
BUILDDIR=build
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_bzero.c ft_memcmp.c ft_memset.c \
	ft_memcpy.c ft_memmove.c ft_memchr.c ft_memchr.c \
	ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
	ft_atoi.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	ft_calloc.c ft_strnstr.c ft_strdup.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_putnbr_fd.c ft_itoa.c ft_striteri.c ft_substr.c \
	ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_split.c


# SRC = $(wildcard ft_*.c)
OBJECTS=$(addprefix $(BUILDDIR)/, $(SRC:.c=.o))

all: $(NAME)

clean:
	@echo "๐งจ Cleaning build and test output folders..."
	@rm -rf *\.dSYM
	@rm -rf $(BUILDDIR)
	@echo "โ Done!"

fclean: clean
	@echo "๐งจ Force cleaning libft..."
	@rm -f $(NAME)
	@echo "โ Done!"

$(BUILDDIR)/%.o: %.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

$(NAME): $(OBJECTS)
	@echo "โ๏ธ Compiling..."
	ar rc $(NAME) $(OBJECTS)
	@echo "โ Done!"

norm:
	@echo "๐ง Norm-i-netting..."
	@norminette $(SRC)
	@echo "โ Done!"

ifndef DEBUG
test:
	@$(MAKE) DEBUG=1 test
else
test: $(NAME)
	@echo "โ๏ธ Running..."
	@$(CC) $(CFLAGS) test.c -L. -lft -o run
	@echo "โ Done!"
endif

run: test
	@./run

re:
	@$(MAKE) fclean
	@$(MAKE) all
