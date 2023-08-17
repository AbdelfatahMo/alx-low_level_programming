#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c;
char ch[] = {'F', 'i', 'z', 'z', 'B', 'u', 'z', 'z'};
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
for (c = 0; c < 8; c++)
{
_putchar(ch[i]);
}
}
else if (i % 3 == 0)
{
for (c = 0; c < 4; c++)
{
_putchar(ch[i]);
}
}
else if (i % 5 == 0)
{
for (c = 4; c < 8; c++)
{
_putchar(ch[i]);
}
}
else if (i > 9)
{
_putchar(((i - (i % 10)) / 10) + 48);
_putchar((i % 10) + 48);
}
else
{
_putchar(i);
}
_putchar(' ');
}
return (0);
}
