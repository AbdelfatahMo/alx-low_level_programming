#include "main.h"
/**
 * print_most_numbers - returns 1 if is alpha case else 1
 * The int to check
 * Return: void
 * On error, returnnothing.
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
