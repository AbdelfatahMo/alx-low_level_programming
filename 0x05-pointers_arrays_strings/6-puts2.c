#include "main.h"
/**
 * puts2 - print
 * @str : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void puts2(char *str)
{
int i = 0;
while (1)
{
if (i == 0 && *str == '\0')
{
break;
}
else if (*(str + i) == '\0')
{
break;
}
i++;
}
for (int x = 0; x <= i; x++)
{
if (x % 2 == 0)
{
_putchar(*(str + i));
}   
}
_putchar('\n');
}
