#include "main.h"
#include <ctype.h>

/**
 *	_isupper - checks is a character is uppercase
 *	@c: carrier interger variable
 *	Return: 1 if true, 0 if false
*/

int isupper(c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
