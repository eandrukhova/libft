# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 22:59:05 by eandrukh          #+#    #+#              #
#    Updated: 2025/03/10 22:14:51 by eandrukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

src = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c  ft_strlen.c

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

		:	fclean all