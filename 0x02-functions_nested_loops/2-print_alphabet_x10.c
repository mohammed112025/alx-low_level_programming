#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 97; j < 123; j++)
{
_putchar((char) j);
}
_putchar('\n');
}
}
