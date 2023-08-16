#include "main.h"
/**
 * print_to_98 - prints day minutes
 * @a: a  are int arg
 * Return: sum of a,b
 * On error, returnnothing.
 */
void print_times_table(int n)
{
    int num, y;
    if (n <= 15 && n >= 0)
    {
        for (int i = 0; i <= n + 1; i++)
        {
            for (int o = 0; o <= n; o++)
            {
                num = i * o;
                y = 3;
                (num >= 100) ? _putchar(((num - ((num % 100))) / 100) + 48) : y--;
                (num >= 10) ? _putchar(((num - (num % 10)) / 10) + 48) : y--;
                _putchar((num % 10) + 48);
                _putchar(',');
                if (i * (o + 1) > 99)
                {
                    _putchar(' ');
                }
                else if (i * (o + 1) > 9)
                {
                }
                else
                {
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                }
            }
        }
    }
}
