#include "main.h"
/**
 * print_last_digit - returns last digit
 * @a: The int to check
 * Return: void
 * On error, returnnothing.
 */
int print_last_digit(int a)
{
if (a < 0)
{
a *= -1;
}
int x;
x = a % 10;
int y;
y = x + 48;
_putchar(y);
return (x);
}
