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
int i, x;
for (i = 1; i < size + 1; i++)
{
for (x = 1; x < i + 1; x++)
{
if (i == x)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}

}
