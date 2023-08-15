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
for (h = 0; h < 10; h++)
{
for (h1 = 0; h1 < 10; h1++)
{
_putchar((h + 48) * h1);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
