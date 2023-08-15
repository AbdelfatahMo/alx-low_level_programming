#include "main.h"
/**
 * _islower - returns 1 if is alpha case else 1
 * @c: The int to check
 * Return: void
 * On error, returnnothing.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
