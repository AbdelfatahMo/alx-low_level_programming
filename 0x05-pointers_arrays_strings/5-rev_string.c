#include "main.h"
/**
 * rev_string - print
 * @s : pointer of string
 * Return: int
 * On error, returnnothing.
 */
void rev_string(char *s)
{
int x;
int i = _strlen(s);
for (x = 0; x < (i / 2) -1; x++)
{
    swap_int(s[x],s[(i - x)]);
}
}
