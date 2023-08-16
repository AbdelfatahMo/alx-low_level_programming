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
    for (i = a; i != 98;)
    {   
        if (a < 0)
        {
            _putchar('-');
        }
        if (a > 99 || a < -99)
        {
           _putchar(((i - ((i % 100))) / 100) + 48);
        }
        if (a > 9 || a < -9)
        {
           _putchar(((i -  (i % 10)) / 10) + 48);
        }
        _putchar((i % 10) + 48);
        _putchar(',');
        _putchar(' ');
        if (a < 98)
        {
            i++;
        }
        else
        {
            i--;
        }
    }
    _putchar(9 + 48);
    _putchar(8 + 48);
    _putchar('\n');
}
