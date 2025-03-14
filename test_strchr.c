
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "libft.h"
int main()
{
    const char *s;
    char c;
    char *pt;
    char *pt_r;
    int k;
    int o;

    o =0;
    s = "Hello World";
    c = 'W';
    k = ft_strlen(s);
    printf("Length %d\n", k);
    
    pt=ft_strchr(s, c);
    pt_r=ft_strrchr(s, c);
    while (o<=(k))
        {printf("Char: %c, pointer: %p \n", s[o], (void *)s + o );
        o++;}
        
    printf("ft_strchr pointer: %p \n", (void *)pt );
    printf("ft_strrchr pointer: %p \n", (void *)pt_r );
    return (0);
}