#include "main.h"
/**
 * _strlen - swap
 * @s : The int pointer to swap
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
c = *(str + 1);
_putchar(c);
}else
{
_putchar('\n');
break;
}
i++;
}
}
