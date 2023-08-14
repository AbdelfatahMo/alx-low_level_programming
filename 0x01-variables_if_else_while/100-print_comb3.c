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
for (i = 48; i <= 57; i++)
{
for (x = 48; x <= 57; x++)
{
if (i == x || i > x)
{
continue;
}
putchar(i);
putchar(x);
if (i == 56 && x == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
