#include "holberton.h"
/**
* _strcat - concatenates two strings
* @src: string 1
* @dest: string 2
*
* Return: pointer to string 2
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
