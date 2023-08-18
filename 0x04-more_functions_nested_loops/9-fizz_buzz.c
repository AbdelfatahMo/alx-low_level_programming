#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, c;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            ch(0, 8);
        }
        else if (i % 3 == 0)
        {
            ch(0, 4);
        }
        else if (i % 5 == 0)
        {
            ch(4, 8);
        }
        else
        {
            if (i > 9)
            {
                _putchar(((i - (i % 10)) / 10) + 48);
            }
            _putchar((i % 10) + 48);
        }
        _putchar(' ');
    }
    return (0);
}
