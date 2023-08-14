#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
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
for (i = 48; i <= 57; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('$\n');
return (0);
}
