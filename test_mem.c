
int main()
{
char strsrc[]="Hi my name is what?";

printf("orig value source: %s \n", strsrc );

ft_memmove(strsrc + 2, strsrc, 6);

printf("after memmove value source: %s \n", strsrc +2);
return (0);
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
    
    pt=ft_memchr(s, c, 15);

    while (s[o] != '\0')
        {printf("Char: %c, pointer: %p \n", s[o], (void *)s + o );
        o++;}
        
    printf("ft_strchr pointer: %p \n", (void *)pt );

    return (0);
}