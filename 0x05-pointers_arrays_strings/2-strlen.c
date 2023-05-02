#include "main.h"

/**
 * _Strlen - Returns the length of a string
 * @s: String whose length is to be found.
 *
 * Return: returns the length of the @s
 */

int _strlen(char *s)
{

	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
