/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:53:13 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 11:53:06 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <stdio.h>

int ft_atoi(const char *nptr)
{
	unsigned char *p;
	int n;
	int len;
	int i;
	int k;
	
	len = ft_strlen(nptr);
	k = 1;
	printf("len: %d \n", len );
	printf("k: %d \n", k );
	p = (unsigned char *)nptr;
	n = 0;
	i = 0;
	while (len > 0)
	{	
		n = (p[len-1]-48) * k + n;
		k *= 10;
		printf("original value source: %d \n", p[len-1]);
		 printf("new value number: %d \n", n );
		 printf("k: %d \n", k );
		len--;
		i++;
	}
	return (n);
}


int main()
{
	int num;
	char *str;
	
	str = "11345";
	num = ft_atoi(str);
	
	printf("original value source: %s \n", str );
	printf("new value number: %d \n", num );
	return (0);
}