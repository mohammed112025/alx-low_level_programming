#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all alphabets in lowercase
 *
 * Return: 0 --> int (Always Success)
*/

int main(void)
{
int i;

for (i = 97; i < 123; i++)
{
putchar(i);
}
for (i = 65; i < 91; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
