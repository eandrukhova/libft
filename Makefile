# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 22:59:05 by eandrukh          #+#    #+#              #
#    Updated: 2025/03/16 12:43:55 by eandrukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

src = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c  ft_strlen.c ft_bzero.c ft_toupper.c ft_tolower.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_atoi.c ft_strlcpy.c

obj = $(src:%.c=%.o)

# all:
#	cc -Wall -Werror -Wextra *.c libft.h 


$(NAME)	:	$(obj) libft.h
	ar rcs $(NAME) $(obj) $?

all		:	$(NAME)

	
%.o		:	%.c libft.h
	cc -Wall -Werror -Wextra -c $< -o $@
	
hjg:
	cc $(functions) testers.c 

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re	:	fclean all

test: re 
	cd libft-war-machine && bash grademe.sh && cd .. 
	