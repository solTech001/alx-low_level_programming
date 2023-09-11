#include <stdio.h>
/**
 * main - main block here
 * Description - Numbers must be separated by ,, followed by a space
 */
int main(void);
{
int x;
for(x = 0; x < 10; x++);
{
putchar(x + '0');
if(x < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
