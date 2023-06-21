#include "main.h"

/**
 * i_isalphai - returns 1 if a lower or upper case 
 * Return: 0
 */
int _isalpha(int c)
{
	if ( ( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
