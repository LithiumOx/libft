# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mdekker <mdekker@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/05 15:23:33 by mdekker       #+#    #+#                  #
#    Updated: 2022/10/07 17:04:31 by mdekker       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re run

CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
BUILDDIR=build
SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_strncmp.c ft_atoi.c ft_calloc.c
OBJECTS=$(addprefix $(BUILDDIR)/, $(SRC:.c=.o))

all: $(NAME)

clean:
	@echo "🧨 Cleaning build folder..."
	@rm -rf $(BUILDDIR)
	@echo "✅ Done!"

fclean: clean
	@echo "🧨 Force cleaning..."
	@rm -f $(NAME)
	@echo "✅ Done!"

$(BUILDDIR)/%.o: %.c $(BUILDDIR)/
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILDDIR):
	@mkdir $(BUILDDIR)

$(NAME): $(OBJECTS)
	@echo "⚙️ Compiling..."
	@ar rc $(NAME) $(OBJECTS)
	@echo "✅ Done!"

norm:
	@echo "🧐 Norm-i-netting..."
	@norminette $(SRC)
	@echo "✅ Done!"

test:
	@echo "⚙️ Running..."
	@$(CC) $(CFLAGS) test.c -L. -lft -o run
	@./run
	@echo "✅ Done!"

re:
	@$(MAKE) fclean
	@$(MAKE) all
