#include "main.h"

/**
 * _Strlen - Returns the length of a string
 * @s: String
 * Return: Longi
 */

int _strlen(char *s)
{

	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
