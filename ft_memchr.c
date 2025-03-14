/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:29:45 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/15 00:40:51 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void s, int c, size_t n)
{
	unsigned const char ptr_s;

	ptr_s = s;
	while (n > 0)
		{
			if ((unsigned char *)ptr_s == char(c))
				return (ptr_s);
			n--;
		}
	return (NULL);
}


int main()
{
	const char *s;
    char c;
    char *pt;
    char *pt_r;

    int o;

    o =0;
    s = "Hello World";
    c = 'e';
    
    pt=ft_memchr(s, c, 6);

    while (s[o] != '\0')
        {printf("Char: %c, pointer: %p \n", s[o], (void *)s + o );
        o++;}
        
    printf("ft_strchr pointer: %p \n", (void *)pt );

    return (0);
}