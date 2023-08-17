#include "main.h"
/**
 * print_diagonal - returns 1 if is alpha case else 1
 * @n : The int to check
 * Return: void
 * On error, returnnothing.
 */
void print_diagonal(int n)
{
int i;
for ( i = 0; i < n; i++)
{
_putchar(' ');
}
if (n > 0)
{
_putchar('\\');
}
_putchar('\n');
}
