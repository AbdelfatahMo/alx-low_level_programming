#include "main.h"
/**
 * print_last_digit - returns last digit
 * @a: The int to check
 * Return: void
 * On error, returnnothing.
 */
int print_last_digit(int a)
{
int x;
x = a % 10;
if (x < 0)
{
x = -x;
}
_putchar(x + 48);
return (x);
}
