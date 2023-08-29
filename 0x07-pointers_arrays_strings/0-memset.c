#include "main.h"
/**
 * _memset - return
 * @s : string
 * @b : char
 * @n : positive int
 * Return: void
 * On error, returnnothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (*(s + i) != '\0')
{
if (i % 10 == 0)
{
_putchar('\n');
}   
_putchar(*s + i);
}
_putchar('\n');
for (i = 0; i < n; i++)
{
*(s + i) = b;
if (i % 10 == 0)
{
_putchar('\n');
}   
_putchar(*s + i);
}
return s;
}
