/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:40:28 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/10 22:13:37 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    ptr = s;
    
    i = 0;
    while (i < n)
        {
        *ptr = c;
        i++;
        ptr++;
        }
    
    return(s);
}
