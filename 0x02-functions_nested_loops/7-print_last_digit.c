#include "main.h"
/**
 * print_last_digit - returns last digit
 * @a: The int to check
 * Return: void
 * On error, returnnothing.
 */
int print_last_digit(int a)
{
int x = a % 10;
_putchar(x);
return (x);
}
