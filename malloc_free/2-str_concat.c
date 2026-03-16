#include "main.h"

/**
*str_concat-concatenates two strings
*@s1:a string
*@s2:a second string :O
*Return:NULL if failed, the concatenated string on success
*/

char *str_concat(char *s1, char *s2)
{
char *result;
int i = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);
while (i < (len1 + len2))
{
if (i < len1)
{
result[i] = s1[i];
i++;
}
else
{
result [i] = s2[i - len1];
i++;
}
}
result[i] = '\0';
return (result);
}
