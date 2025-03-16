/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:53:13 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 12:05:07 by eandrukh         ###   ########.fr       */
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
	int k;
	
	p = (unsigned char *)nptr;
	n = 0;
	len = ft_strlen(nptr);
	k = 1;
	while (len > 0)
	{	
		n = (p[len-1]-48) * k + n;
			k *= 10;
			len--;
	}
	return (n);
}
