#include "main.h"
/**
 * more_numbers - returns 1 if is alpha case else 1
 * The int to check
 * Return: void
 * On error, returnnothing.
 */
void more_numbers(void)
{
int i, x;
for (x = 0; x < 11; x++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar(((i - (i % 10)) / 10) + 48);
_putchar((i % 10) + 48);
}else
{
_putchar(i + 48);
}
}
_putchar('\n');
}
}
