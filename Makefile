# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mdekker <mdekker@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/05 15:23:33 by mdekker       #+#    #+#                  #
#    Updated: 2022/10/25 16:34:52 by mdekker       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re run test

CC=cc
CFLAGS=-Wall -Wextra -Werror $(if $(DEBUG),-g -fsanitize=address)
NAME=libft.a
BUILDDIR=build
SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_strncmp.c ft_atoi.c \
	ft_strchr.c ft_strrchr.c \
	#ft_calloc.c
SRC = $(wildcard ft_*.c)
OBJECTS=$(addprefix $(BUILDDIR)/, $(SRC:.c=.o))

$(warning $(OBJECTS))

all: $(NAME)

clean:
	@echo "🧨 Cleaning build folder..."
	@rm -rf *\.dSYM
	@rm -rf $(BUILDDIR)
	@echo "✅ Done!"

fclean: clean
	@echo "🧨 Force cleaning..."
	@rm -f $(NAME)
	@echo "✅ Done!"

$(BUILDDIR)/%.o: %.c $(BUILDDIR)/
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

$(NAME): $(OBJECTS)
	@echo "⚙️ Compiling..."
	@ar rc $(NAME) $(OBJECTS)
	@echo "✅ Done!"

norm:
	@echo "🧐 Norm-i-netting..."
	@norminette $(SRC)
	@echo "✅ Done!"

ifndef DEBUG
test:
	@$(MAKE) DEBUG=1 test
else
test: $(NAME)
	@echo "⚙️ Running..."
	@$(CC) $(CFLAGS) test.c -L. -lft -o run
	@echo "✅ Done!"
endif

run: test
	@./run

re:
	@$(MAKE) fclean
	@$(MAKE) all
