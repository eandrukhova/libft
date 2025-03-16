/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:20:23 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 16:15:49 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_memset.c"
#include <stdio.h>
/*size_t	ft_strlcpy(char *dst, const char *restrict src,	size_t sz)
{
	unsigned char *ptr_src;
	size_t i;
    size_t k;
	
	ptr_src = (unsigned char *)src;
	i = 1;
	
	if (sz <= 1)
        {
            return(ft_strlen(src)); 
            
        }
	
	if (ft_strlen(src) <= (sz - 1))
		k = ft_strlen(src);
	else k = (sz - 1);
	
	while (i <= k)
	{
		*dst++ = *ptr_src++;
		i++;
	}
    printf("i last: %d \n", i );
	dst[i-1]='\0';
	return (ft_strlen(src));
}*/

size_t	ft_strlcpy(char *dst, const char *restrict src,	size_t sz)
{
	unsigned char *ptr_src;
	size_t i;
	size_t src_len;
	
	ptr_src = (unsigned char *)src;
	i = 0;
	src_len = ft_strlen(src);
	
	if (sz == 0)
		return(src_len);
		
	while (i < (sz - 1) && ptr_src[i] != '\0')
	{	dst[i]=ptr_src[i];
		i++;
	}
	dst[i]='\0';
	return (src_len);
}



int main()
{
	const char *s;
    char dest[5];
    size_t t;
  
    s = "Hello12345";
   
	printf("ft_strlcpy dest: %s \n", dest);
    
    ft_strlcpy(dest, s, 5);
   
    printf("ft_strlcpy source size: %zu \n", ft_strlcpy(dest, s, 5) );
	printf("ft_strlcpy dest: %s \n", dest);
    return (0);
}