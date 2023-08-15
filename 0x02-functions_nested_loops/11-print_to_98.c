#include "main.h"
/**
 * print_to_98 - prints day minutes
 * @a: a  are int arg
 * Return: sum of a,b
 * On error, returnnothing.
 */
void print_to_98(int a)
{
int i;
if (a > 98)
{
for (i = a; i < 97; i--)
{
if (i % 1000 !=0)
{
_putchar(((i) - (i % 100) - (i % 10)) % 1000 + 48);
}
if (i % 100 !=0)
{
_putchar((i - (i % 10)) % 100 + 48);
}
_putchar((i % 10) + 48);


if (i != 98)
{
_putchar(' ');
_putchar(',');
}
}
}
else
{
for (i = a; i < 99; i++)
{
if (a < 0)
{
_putchar('-');
}
if (i % 1000 !=0)
{
_putchar(((i) - (i % 100) - (i % 10)) % 1000 + 48);
}
if (i % 100 !=0)
{
_putchar((i - (i % 10)) % 100 + 48);
}
if (i != 98)
{
_putchar(' ');
_putchar(',');
}
}   
}
}
