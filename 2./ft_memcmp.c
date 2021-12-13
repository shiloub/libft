int ft_memcmp(const void *s1, const void *s2, int n)
{
    int i;
    unsigned char *_s1;
    unsigned char *_s2;
    
    _s1 = (unsigned char *)s1;
    _s2 = (unsigned char *)s2;
    i = 0;
    if (n == 0)
        return (0);
    while (i < n && _s1[i] == _s2[i])
    {
        i++;
    }
    if (i == n)
        return (0);
    return (_s1[i] - _s2[i]);
}
