#include "main.h"
/**
 * print_triangle - returns 1 if is alpha case else 1
 * @size : The int to check
 * Return: void
 * On error, returnnothing.
 */
void print_triangle(int size)
{
int i, x;
for (i = 0; i < size; i++)
{
for (x = size; x >= 0; x--)
{
if (i >= x)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
