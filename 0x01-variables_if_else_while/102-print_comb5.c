#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, x, y, z;
for (i = 48; i <= 57; i++)
{
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
for (z = 48; z <= 57; z++)
{
if (i > y || z + (y * 10) < x  + (i * 10) + 1 )
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
goto end;
}
putchar(',');
putchar(' ');
}
}
}
}
end:
putchar('\n');
return (0);
}
