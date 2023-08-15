#include "main.h"
/**
 * times_table - prints time tables
 * not take arg
 * Return: void
 * On error, returnnothing.
 */
void times_table(void)
{
int h;
int h1;
int num;
for (h = 0; h < 10; h++)
{
for (h1 = 0; h1 < 10; h1++)
{
num = (h * h1);
if (num + 48 < 58)
{
_putchar(num + 48);
}
else
{
_putchar(((num - (num % 10)) / 10) + 48);
_putchar((num % 10) + 48);
}
if (h1 < 9)
{
_putchar(',');
_putchar(' ');
if (num + 48 < 58)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
