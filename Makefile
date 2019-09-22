# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trobbin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 15:48:48 by trobbin           #+#    #+#              #
#    Updated: 2019/09/22 21:26:38 by trobbin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNCTIONS = ft_atoi ft_bzero ft_isascii ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_itoa ft_memalloc ft_memdel ft_memchr ft_memcmp ft_memcpy ft_memccpy ft_memset ft_memmove ft_putchar ft_putchar_fd ft_putnbr ft_putnbr_fd ft_putendl ft_putendl_fd ft_putstr ft_putstr_fd ft_strcmp ft_strncmp ft_strlen ft_strcpy ft_strnew ft_strdel ft_strclr ft_strcat ft_strequ ft_strnequ ft_striter ft_striteri  ft_strmap ft_strmapi ft_strncat ft_strncpy ft_strstr ft_strnstr ft_strtrim ft_strsub ft_strlcat ft_strchr ft_strrchr ft_strdup ft_strjoin ft_strsplit ft_toupper ft_tolower
SOURCE = $(addsuffix .c, $(FUNCTIONS))

all: $(NAME)

binary:
	@gcc -Wall -Wextra -Werror -c $(SOURCE)

$(NAME): binary
	@ar rc $(NAME) $(addsuffix .o,$(FUNCTIONS))
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(addsuffix .o,$(FUNCTIONS))

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

check: all fclean
