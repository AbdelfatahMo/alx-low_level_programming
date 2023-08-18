#include "main.h"
/**
 * print_diagonal - returns 1 if is alpha case else 1
 * @n : The int to check
 * Return: void
 * On error, returnnothing.
 */
void print_diagonal(int n)
{
    int i, x;
    for (i = 1; i < n + 1; i++)
    {
        for (x = 1; x < n+1; x++)
        {
            if (i == x)
            {
               _putchar('\\');
            }
            else
            {
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
    if (n <= 0)
    {
        _putchar('\n');
    }
}
