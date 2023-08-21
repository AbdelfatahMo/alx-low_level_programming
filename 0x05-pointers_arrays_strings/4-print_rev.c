#include "main.h"
/**
 * print_rev - print
 * @s : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void print_rev(char *s)
{
    int i = 0;
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
    while (1)
    {   
        i--;
        if (i == 0)
        {
            _putchar(*s);
        }
        else if (i > 0)
        {
            _putchar(*(s + i));
        }
        else
        {
            _putchar('\n');
            break;
        }
    }
}
