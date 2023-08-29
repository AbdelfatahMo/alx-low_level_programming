#include "main.h"
/**
 * _memcpy - return pointer
 * @dest : char*
 * @src : char*
 * @n : positive int
 * Return: pointer
 * On error, returnnothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
