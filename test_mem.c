
int main()
{
char strsrc[]="Hi my name is what?";

printf("orig value source: %s \n", strsrc );

ft_memmove(strsrc + 2, strsrc, 6);

printf("after memmove value source: %s \n", strsrc +2);
return (0);
}