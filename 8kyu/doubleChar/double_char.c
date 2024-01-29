char    *double_char(const char *string, char *doubled)
{
    int i;
    int j;
    
    i = -1;
    j = 0;
    while (string[++i])
    {
        doubled[j++] = string[i];
        doubled[j++] = string[i];
    }
    doubled[j] = '\0';
    return doubled;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char    string[] = "toundestand";
    char    *copy;

    copy = (char *)malloc(sizeof(char) * (strlen(string) * 2));
    double_char(string, copy);
    printf("%s\n", copy);
    
    free(copy);
    return (0);
}

