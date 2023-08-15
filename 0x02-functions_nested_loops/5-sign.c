#include "main.h"
/**
 * print_sign - returns 1 if is num > 0 and 0 if num is 0 otherwise -1
 * @n: The int to check
 * Return: void
 * On error, returnnothing.
 */
int print_sign(int n)
{
if (n>0)
{
_putchar('+');;
return (1);
}
else if (n==0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}


}
