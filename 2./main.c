#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "abcaa";
    char *s2 = "aazzz";

    printf("%d", memcmp(s1, s2, 5));
    return 0;
}

