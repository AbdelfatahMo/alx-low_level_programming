#include "main.h"
/**
 * swap_int - swap
 * @a : The int pointer to swap
 * @b : The int pointer to swap
 * Return: void
 * On error, returnnothing.
 */
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
