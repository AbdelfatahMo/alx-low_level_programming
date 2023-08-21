#include "main.h"
/**
 * _puts - print
 * @str : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void _puts(char *str)
{
int i;
char c;
i = 0;
while (1)
{
if (i == 0 && *str != '\0')
{
c = *str;
_putchar(c);
}
else if (*(str + i) != '\0')
{
c = *(str + i);
_putchar(c);
}
else
{
_putchar('\n');
break;
}
i++;
}
}
