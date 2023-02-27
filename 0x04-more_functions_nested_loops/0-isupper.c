#include "main.h"

/**
 *	_isupper - checks is a character is uppercase
 *	@c: character  interger variable
 *	Return: 1 if true, 0 if false
*/

int _isupper(c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
