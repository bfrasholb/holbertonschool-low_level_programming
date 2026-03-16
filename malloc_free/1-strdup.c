#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* containing a copy of the string given as a parameter
* @str: string to duplicate
* Return: pointer to the duplicated string, or NULL if it fails
*/

char *_strdup(char *str)
{
  char *copy;
  int i = 0, len = 0;

  if (str == NULL)
    return (NULL);

  while (str[len] != '\0')
    len++;

  copy = malloc((len + 1) * sizeof(char));
  if (copy == NULL)
    return (NULL);

  while (i < len + 1)
    {
      copy[i] = str[i];
      i++;
    }
  return (copy);
}
