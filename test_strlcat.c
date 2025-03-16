/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:25:32 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 18:09:28 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include "ft_strlen.c"
#include "ft_memset.c"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *restrict src,	size_t dstsize)
{
	unsigned char	*ptr_src;
	size_t			i;
	size_t			src_len;
    size_t			dst_len;

    size_t o;
    o = sizeof(*dst);
    printf("size of dest: %zu \n", o);

	ptr_src = (unsigned char *)src;
	i = 0;
	/*src_len = ft_strlen(src);*/
	src_len = 0;
	while (ptr_src[src_len] != '\0')
        src_len++;
    /*dst_len = ft_strlen(dst);*/
	dst_len = 0;
	while (dst[dst_len] != '\0')
        dst_len++;

	if (dstsize < dst_len || dstsize == 0)
        return (dstsize + src_len);
        
	while (i < (dstsize - 1) && ptr_src[i] != '\0' && (dst_len + i) < (dstsize - 1)) 
	{
		dst[dst_len + i] = ptr_src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}




int main()
{
	const char *s;
    char dest[15]="rrrrrrrrrrrrrrr";
    size_t t;
    size_t o;
  
    s = "lorem ipsum dolor sit amet";

   
	printf("ft_strlcpy dest: %s \n", dest);
    o = sizeof(dest);
    
    /*ft_strlcat(dest, s, 20);*/
   
    printf("ft_strlcat2 source size: %zu \n", ft_strlcat(dest, s, 5) );
	printf("ft_strlcat2 dest: %s \n", dest);


    return (0);
}