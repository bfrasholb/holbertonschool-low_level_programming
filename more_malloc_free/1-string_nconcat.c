#include "main.h"

/**
*string_nconcat- concatenates two strings
*@s1:first string
*@s2:second string
*@n:number of bytes from s2
*Return:pointer to new string, or NULL on fail
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n > len2)
n = len2;
result = (char *)malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

while (i < len1 + n + 1)
{
if (i < len1)
result[i] = s1[i];
else if (i < len1 + n)
result[i] = s2[i - len1];
else
result[i] = '\0';
i++;
}
return (result);
}
