#include "main.h"
/**
 * more_numbers  - prints 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{

int i, j, digit;
while (digit <= 10)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
