#include "main.h"
/**
 * print_rev - print
 * @s : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void print_rev(char *s)
{
int i = sizeof(s);
char c;
while (1)
{
if (i == 0)
{
c = *s;
_putchar(c);
_putchar('\n');
break;
}
else if (*(s + i) != '\0')
{
c = *(s + i);
_putchar(c);
}
i--;
}
}
