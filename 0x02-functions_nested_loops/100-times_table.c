#include "main.h"
/**
 * print_to_98 - prints day minutes
 * @a: a  are int arg
 * Return: sum of a,b
 * On error, returnnothing.
 */
void print_times_table(int n)
{
    int num, y, i, o, x;
    if (n <= 15 && n >= 0)
    {
        for (i = 0; i <= n + 1; i++)
        {
            for (o = 0; o <= n; o++)
            {   
                num = i * o;
                (num >= 100) ? _putchar(((num - ((num % 100))) / 100) + 48) : y;
                (num >= 10) ? _putchar(((num - (num % 10)) / 10) + 48) : y ;
                _putchar((num % 10) + 48);
                _putchar(',');
                if (i * (o + 1) > 99)
                {
                    y = 1;
                }
                else if (i * (o + 1) > 9)
                {
                    y = 2;
                }
                else
                {
                    y = 3;
                }
                for ( x = 0; x <= y; y++)
                {
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
}
