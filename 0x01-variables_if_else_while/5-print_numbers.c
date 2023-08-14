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
char i;
for (i = 0; i <= 9; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
