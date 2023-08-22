#include "main.h"
/**
 * rev_string - print
 * @s : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void rev_string(char *s)
{
    int i, x, y;
    char swap;
    i = 0;
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
    x = (i + 1) / 2;
    if (i % 2 == 1)
    {
        x = (i + 2) / 2;
    }
    for (y = i; y >= x; y--)
    {
        swap = *(s + y);
        *(s + y) = *(s + i -y);
        *(s + i -y) = swap;
    }
}
