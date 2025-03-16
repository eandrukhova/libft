/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:20:23 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 13:21:41 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_memset.c"
#include <stdio.h>
size_t	ft_strlcpy(char *dst, const char *restrict src,	size_t sz)
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
}

int main()
{
	const char *s;
    char *dest;
    size_t t;
    int i;
    int c; 

    c = 'v';
    
    ft_memset(dest, c, 8);
    i=0;
    s = "Hello";
   
    while (i < 8)
    {
        if (dest[i] == '\0') {
            printf("dest[%zu] = '\\0' (null terminator)\n", i);
        } else if (dest[i] < 32 || dest[i] > 126) {
            // Non-printable characters (e.g., uninitialized values)
            printf("dest[%zu] = %d (non-printable)\n", i, dest[i]);
        } else {
            // Printable characters
            printf("dest[%zu] = '%c'\n", i, dest[i]);
        }
        i++;
    }

    
    ft_strlcpy(dest, s, 8);
    while (i < 8)
    {
        if (dest[i] == '\0') {
            printf("dest[%zu] = '\\0' (null terminator)\n", i);
        } else if (dest[i] < 32 || dest[i] > 126) {
            // Non-printable characters (e.g., uninitialized values)
            printf("dest[%zu] = %d (non-printable)\n", i, dest[i]);
        } else {
            // Printable characters
            printf("dest[%zu] = '%c'\n", i, dest[i]);
        }
        i++;
    }
    printf("ft_strlcpy source size: %d \n", ft_strlcpy(dest, s, 8) );
	printf("ft_strlcpy dest: %s \n", dest);
    return (0);
}