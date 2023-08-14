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
int x;
int arr[2] = {48, 44};
for (i = 48; i <= 57; i++)
{
for (x = 0; x < 2; x++)
{
arr[0] = i;
if (i == 57 && x == 1)
{
break;
}
putchar(arr[x]);
}
if (i != 57)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
