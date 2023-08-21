#include "main.h"
/**
 * _strlen - swap
 * @s : The int pointer to swap
 * Return: int
 * On error, returnnothing.
 */
int _strlen(char *s)
{
int i;
i = 0;
while (1)
{
if (i == 0 && *s == '\0')
{
return (0);   
}
else if (*(s + i)== '\0')
{
return (i);
}
i++;
}
}
