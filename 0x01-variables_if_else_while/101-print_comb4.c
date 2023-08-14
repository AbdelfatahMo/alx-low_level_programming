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
for (i = 48; i <= 57; i++)
{
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
if (i == x || i > x || i == y || x == y || y < x)
{
continue;
}
putchar(i);
putchar(x);
putchar(y);
if (i == 55 && x == 56 && y==57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
