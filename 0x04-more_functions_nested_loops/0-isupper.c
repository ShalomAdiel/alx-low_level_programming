#include "main.h"

/**
 *	_isupper - checks is a character is uppercase
 *	@c: character  interger variable
 *	Return: 1 if true, 0 if false
*/

int _isupper(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}
