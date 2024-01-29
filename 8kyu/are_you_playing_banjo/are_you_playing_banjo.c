#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/*char    *are_you_playing_banjo(const char *name)
{
    char *buffer;
    asprintf(&buffer, tolower(name[0]) == 'r' ? "%s plays bajo" : "%s does not play banjo", name);
    return buffer;
}*/

/*char    *are_you_playing_banjo(const char *name)
{
    char    *buffer;
    if (name[0] == 'r' || name[0] == 'R')
        asprintf(&buffer, "%s plays banjo", name);
    else
        asprintf(&buffer, "%s does not play banjo", name);

    return buffer;
}*/

char    *are_you_playing_banjo(const char *name)
{
    char    *buffer;
    char    *no;

    no = " does not play banjo";
    buffer = (char *)malloc(strlen(name) + strlen(no));
    strcpy(buffer, name);
    if (name[0] == 'R' || name[0] == 'r')
        strcat(buffer, " plays banjo");
    else
        strcat(buffer, no);
    
    return buffer;
}


int main(void)
{
    printf("%s\n", are_you_playing_banjo("Edisson"));
    printf("%s\n", are_you_playing_banjo("Raul"));
    return (0);
}
