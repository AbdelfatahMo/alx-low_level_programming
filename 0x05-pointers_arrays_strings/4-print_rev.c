#include "main.h"
/**
 * print_rev - print
 * @s : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void print_rev(char *s)
{
    int i;
    while (1)
    {
        if (i == 0 && *s == '\0')
        {
           break;
        }
        else if (*(s + i) == '\0')
        {
            break;
        }
        i++;
    }
    char c;
    while (1)
    {
        if (i <= 0)
        {
            c = *(s + i);
            _putchar(c);
            _putchar('\n');
            break;
        }
        else
        {
            c = *(s + i);
            _putchar(c);
        }
        i--;
    }
}
