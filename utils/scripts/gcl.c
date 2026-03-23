#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char command[512] = "git clone ", repo[256], addr[512];
    char *abbrv = "HolbertonSchool-";

    if (argc < 3)
    {
        printf("Usage: gcl <username> <repository>\n");
        return 1;
    }

    if (tolower(argv[2][0]) == 'h' && tolower(argv[2][1]) == 's')
    {
        strcpy(repo, abbrv);
        strcat(repo, argv[2] + 2);
    }

    /* Build base URL */
    snprintf(addr, sizeof(addr), "https://www.github.com/%s/%s", argv[1], repo);

    /* Append .git if missing */
    if (strlen(addr) < 4 || strcmp(addr + strlen(addr) - 4, ".git") != 0)
        strcat(addr, ".git");

    /* Build final command */
    strcat(command, addr);

    system(command);
    return 0;

}