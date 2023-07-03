#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int val;

	val = 0;
	while (n[val] != '\0')
	{
		if (n[val] >= 'a' && n[val] <= 'z')
			n[val] = n[val] - 32;
		val++;
	}
	return (n);
}
