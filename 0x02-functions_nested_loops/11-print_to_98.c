#include "main.h"
/**
 * print_to_98 - prints day minutes
 * @a: a  are int arg
 * Return: sum of a,b
 * On error, returnnothing.
 */
void print_to_98(int a)
{
    int i, x;
    for (i = a; i != 98;)
    {   
        if (i < 0)
        {
            _putchar('-');
        }
        x = i;
        if (i >= 100 || i <= -100)
        {
           _putchar((((unsigned int)x - (((unsigned int)x % 100))) / 100) + 48);
        }
        if (i >= 10 || i <= -10)
        {
           _putchar(((((unsigned int)x % 100) - ((unsigned int)x % 10))/10) + 48);
        }
        _putchar(((unsigned int)x % 10) + 48);
        _putchar(',');
        _putchar(' ');
        if (i > 98 )
        {
            i--;
        }
        else
        {
            i++;
        }
    }
    _putchar(9 + 48);
    _putchar(8 + 48);
    _putchar('\n');
}
