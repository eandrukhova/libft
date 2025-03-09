/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:35:34 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/09 23:27:28 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
// #include "ft_isalpha.c"
// #include "ft_isdigit.c"


int	main(int argc, char **argv)
{
	//argv = ["first" , "second", "third"....]//
	int i = 2;
	int l = 0;

	while ((i >= 2) && (i < argc))
	{
		if (ft_isalpha(*argv[i]) == 1)
		{
			printf("%c ft_isalpha - FAIL - not a letter\n",*argv[i]);
		}
		else
		{
			printf("%c ft_isalpha - PASS - a letter\n",*argv[i]);
		}

		if (ft_isdigit(*argv[i]) == 1)
		{
			printf("%c ft_isdigit - FAIL - not an integer\n",*argv[i]);
		}
		else
		{
			printf("%c ft_isdigit - PASS - an integer\n",*argv[i]);
		}

		if (ft_isalnum(*argv[i]) == 1)
		{
			printf("%c ft_isalnum - FAIL - not an integer, not a letter\n",*argv[i]);
		}
		else
		{
			printf("%c ft_isalnum - PASS - an integer or a letter\n",*argv[i]);
		}

		if (ft_isascii(*argv[i]) == 1)
		{
			printf("%c ft_isascii - FAIL - not an ASCII\n",*argv[i]);
		}
		else
		{
			printf("%c ft_isascii - PASS - an ASCII\n",*argv[i]);
		}

		if (ft_isprint(*argv[i]) == 1)
		{
			printf("%c ft_isprint - FAIL - not a printable cahracter\n",*argv[i]);
		}
		else
		{
			printf("%c ft_isprint - PASS - a printable character\n",*argv[i]);
		}
		
		i++;
	}

	l = ft_strlen("hello w");
	printf("Word length %i", l);

	return (0);
}
