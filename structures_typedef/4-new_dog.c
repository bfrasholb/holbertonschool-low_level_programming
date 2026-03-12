#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* str_len - returns the length of a string
* @s: string to measure
* Return: length of string
*/
int str_len(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

/**
* str_copy - copies a string from src to dest
* @dest: destination string
* @src: source string
* Return: pointer to dest
*/
char *str_copy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to new dog, or NULL if failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;
int len_name, len_owner;

if (name == NULL || owner == NULL)
return (NULL);

len_name = str_len(name);
len_owner = str_len(owner);

name_copy = malloc(len_name + 1);
if (!name_copy)
return (NULL);
str_copy(name_copy, name);

owner_copy = malloc(len_owner + 1);
if (!owner_copy)
{
free(name_copy);
return (NULL);
}
str_copy(owner_copy, owner);

d = malloc(sizeof(dog_t));
if (!d)
{
free(name_copy);
free(owner_copy);
return (NULL);
}

d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
