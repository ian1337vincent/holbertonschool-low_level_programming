#include "holberton.h"
/**
* _islower - checks for lowercase character
*
* Return: 1
*/
int _islower(int c)
{
	int lower = 'a';
	int upper = 'A';

	if (_islower(lower))
	{
		_putchar(lower);
	}
		else
		{
			_putchar(upper);
		}
	return (c);
}
