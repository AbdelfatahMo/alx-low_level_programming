#include "main.h"
/**
 * puts_half - print
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
            break;
        }
        else if (*(str + i) == '\0')
        {
            break;
        }
        i++;
    }
    int x;
    x = i / 2;
    if (i % 2 ==1)
    {
        x = (i - 1) / 2;
    }
    
    for (int y = x; y < i + 1; y++)
    {
        _putchar(*(str + y));
    }
    _putchar('\n');
}
