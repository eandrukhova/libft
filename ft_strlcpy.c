/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:20:23 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 16:24:52 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src,	size_t sz)
{
	unsigned char	*ptr_src;
	size_t			i;
	size_t			src_len;

	ptr_src = (unsigned char *)src;
	i = 0;
	/*src_len = ft_strlen(src);*/
	src_len = 0;
	while (ptr_src[src_len] != '\0')
		src_len++;
	if (sz == 0)
		return (src_len);
	while (i < (sz - 1) && ptr_src[i] != '\0')
	{
		dst[i] = ptr_src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
