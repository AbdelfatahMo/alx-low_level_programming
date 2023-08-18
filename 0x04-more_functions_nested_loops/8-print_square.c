#include "main.h"
/**
 * print_square - returns 1 if is alpha case else 1
 * @size : The int to check
 * Return: void
 * On error, returnnothing.
 */
void print_square(int size)
{
int i, x;
for (i = 1; i < size + 1; i++)
{
for (x = 1; x < size + 1; x++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
