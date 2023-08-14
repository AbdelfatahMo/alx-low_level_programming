#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int x;
int y;
int z;
for (i = 48; i <= 57; i++)
{
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
for (z = 48; z <= 57; z++)
{
if (i > y || z < x + 1)
{
continue;
}
putchar(i);
putchar(x);
putchar(' ');
putchar(y);
putchar(z);
if (i == 57 && x == 56 && y == 57 && z == 57)
{
break;
}
putchar(',');
putchar(' ');
}
if (i == 57 && x == 56 && y == 57 && z == 57)
{
break;
}
}
if (i == 57 && x == 56 && y == 57 && z == 57)
{
break;
}
}
if (i == 57 && x == 56 && y == 57 && z == 57)
{
break;
}
}
putchar('\n');
return (0);
}
