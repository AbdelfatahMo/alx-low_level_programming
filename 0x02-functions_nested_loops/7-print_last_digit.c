#include "main.h"
/**
 * print_last_digit - returns last digit
 * @a: The int to check
 * Return: void
 * On error, returnnothing.
 */
int print_last_digit(int a)
{
_putchar((a % 10) + 48);
return (a % 10);
}
