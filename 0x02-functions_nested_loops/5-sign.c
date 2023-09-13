#include "main.h"
/**
 * int print_sign - prints the sign of a number
 * @n - the character to be check
 * Returns : positive (+) for > 0, negative for < 0 and zero for = 0
 */
int print_sign(int n)
{
	if(n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if(n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else{
	_putchar('0');
	return (0);
	}
	_putchar('\n');	
}
