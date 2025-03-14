/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:36:22 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/15 00:18:18 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;
	size_t				i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (dest < src)
			ptr_dest[i] = ptr_src[i];
		else if (dest > src)
			ptr_dest[n - i - 1] = ptr_src[n - i - 1];
		i++;
	}
	return (dest);
}
