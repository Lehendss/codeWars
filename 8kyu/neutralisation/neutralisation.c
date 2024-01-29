void    neutralize(const char *s1, const char *s2, char *s3)
{
    int i;

    i = -1;
    while(s1[++i])
    {
        if (s1[i] == s2[i])
            s3[i] = s1[i];
        else
            s3[i] = '0';
    }
    s3[i] = '\0';
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char    s1[] = "-++-";
    char    s2[] = "-+-+";
    char *s3;

    s3 = (char *)malloc(sizeof(char) * strlen(s1));
    neutralize(s1, s2, s3);
    printf("%s\n", s3);

    free(s3);
    return (0);
}
