#include "holberton.h"
/**
* _strlen - returns the length of a string
* @s: value of string
* Return: length
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
