#include "main.h"
/**
 * jack_bauer - 
 * : The int to check
 * Return: void
 * On error, returnnothing.
 */
void jack_bauer(void)
{
int h;
int h1;
int m;
int m1;
for (h = 0; h < 3; h++)
{
for (h1 = 0; h1 < 10; h1++)
{
for (m = 0; m < 6; m++)
{
for (m1 = 0; m1 < 10; m1++)
{  
_putchar(h);
_putchar(h1);
_putchar(':');
_putchar(m);
_putchar(m1);
_putchar('\n');                
}            
}        
}    
}
}
