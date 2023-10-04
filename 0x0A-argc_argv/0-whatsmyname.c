#include "main.h"
#include <stdio.h>
/**
 * main - an entry point of C
 * @argc: argument count
 * @argv: argument vector
 * Return: alway (0)
 */
int main (int argc, char *argv[])
{
if (argc > 0)
	printf("%s\n", argv[0]);
return (0);
}
