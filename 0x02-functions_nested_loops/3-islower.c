#include "main.h"
/**
 * _islower - returns 1 if is lower case else 1
 * @c: The int to check
 * Return: void
 * On error, returnnothing.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
