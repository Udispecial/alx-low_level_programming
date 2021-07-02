#include "holberton.h"

/**
 * _strncpy - copy a string
 * @dest: point the first string
 * @src: point the second string
 * @n: number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] !='\0';)
{
	dest[j] = src[j];
}
for( ; j < n; j++)
dest[j] = '\0';
return (dest);
}
