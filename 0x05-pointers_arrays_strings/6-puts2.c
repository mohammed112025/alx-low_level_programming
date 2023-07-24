#include "main.h"

/**
 * Description: puts2 - prints every other character of a string with the first
 *
 * Input:
 *     @str: the string
 *
 * Return: NULL
 */

void puts2(char *str)
{
int i, len = 0;
while (str[len] != '\0')
{
len++;
}
len--;
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
