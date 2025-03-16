/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:20:23 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 13:06:27 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src,	size_t sz)
{
	unsigned char *ptr_src;
	size_t i;
	size_t k;
	
	ptr_src = (unsigned char *)src;
	i = 1;
	
	if (sz < 1)
		return(ft_strlen(src));
	if (ft_strlen(src) <= (sz - 1))
		k = ft_strlen(src);
	else k = (sz - 1);
	
	while (i <= k)
	{
		*dst++ = *ptr_src++;
		i++;
	}
	dst[i - 1]='\0';
	return (ft_strlen(src));
}
