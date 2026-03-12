#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: pointer to the new concatenated string, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
char *newstr;
int i, j, len1, len2;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = 0;
while (s1[len1] != '\0')
len1++;

len2 = 0;
while (s2[len2] != '\0')
len2++;

newstr = malloc(sizeof(char) * (len1 + len2 + 1));
if (newstr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
newstr[i] = s1[i];

for (j = 0; j < len2; j++)
newstr[i + j] = s2[j];

newstr[len1 + len2] = '\0';

return (newstr);
}
