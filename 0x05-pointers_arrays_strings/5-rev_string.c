#include "main.h"
/**
 * rev_string - print
 * @s : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void rev_string(char *s)
{
char c;
int x;
int i = _strlen(s);
for (x = 0; x < (i / 2) -1; x++)
{
    c= *(s + x);
    *(s + x) = *(s + (i - x));
    *(s + (i - x)) = c;
}
}
