# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 22:59:05 by eandrukh          #+#    #+#              #
#    Updated: 2025/03/09 22:27:27 by eandrukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

functions = ft_isalpha.c ft_isdigit.c

all:
	cc *.c 
hjg:
	cc $(functions) testers.c 

fclean: 
	rm *.gch *.out