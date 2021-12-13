void    *ft_memset(void *s, int c, int n)
{
    int i;
    char    *p;

    i = 0;
    p = s;
    while (i < n)
    {
        *p = c;
        i++;
        p++;
    }
    return (s);
}
