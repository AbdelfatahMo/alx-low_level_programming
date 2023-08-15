#include "main.h"
/**
 * print_alphabet_x10 - prints the characters x10
 *
 * Return: void
 * On error, returnnothing.
 */
void print_alphabet_x10(void)
{
char i;
int x;
for (x = 0; x < 10; x++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
