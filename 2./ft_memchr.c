void *ft_memchr(const void *s, int c, int n)
{
    unsigned char   *src;
    int i;
    
    i = 0;
    src = (unsigned char *)s;
    while (i < n)
    {
        if (src[i] == (unsigned char)c)
            return (src + i);
        i++;
    }
    return (0);
}
