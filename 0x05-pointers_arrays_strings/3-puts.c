#include "main.h"
/**
 * _puts - print a string, followed by a new line. to the stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(*str++);
	}
	puts('\n');
}
