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
for ( i = 0; i < size; i++)
{
for ( x = 0; x < size; x++)
{
   _putchar('#');
}
_putchar('\n');
}
}
