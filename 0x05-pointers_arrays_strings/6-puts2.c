#include "main.h"
/**
 * puts2 - print
 * @str : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void puts2(char *str)
{
int i;
char c;
i = 0;
while (1)
{
if (*(str + i) == '\0')
{
break;
}
else if (i % 2 == 0)
{
c = *(str + i);
_putchar(c);
}
else
{
}
i++;
}
_putchar('\n');
}
