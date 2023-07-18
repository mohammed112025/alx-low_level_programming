#include "main.h"

/**
 * times_table - print the times table
 *
 * Return: Null
 */

void times_table(void)
{
int i, j, num;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
num = i * j;
if (num < 10)
{
_putchar(num + '0');
}
else
{
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
if (num < 10)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
