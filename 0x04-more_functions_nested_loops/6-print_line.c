#include "main.h"

/**
 * Description: print_line - print a line using "_" with length n
 *
 * Input:
 *     @n: [int] --> the length of the line
 *
 * Return: Null
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
return;
}
