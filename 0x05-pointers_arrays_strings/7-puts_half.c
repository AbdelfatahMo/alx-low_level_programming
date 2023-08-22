#include "main.h"
/**
 * puts2 - print
 * @str : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void puts_half(char *str)
{
    int i;
    char c;
    i = 0;
    while (1)
    {
        if (i == 0 && *str == '\0')
        {
            return (0);
        }
        else if (*(str + i) == '\0')
        {
            return (i);
        }
        i++;
    }
    int x = i / 2;
    if (i % 2 ==1)
    {
        x = (i - 1) / 2;
    }
    
    for (x; x < i + 1; x++)
    {
        _putchar(*(str + x));
    }
    _putchar('\n');
}
