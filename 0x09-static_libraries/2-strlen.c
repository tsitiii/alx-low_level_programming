#include "main.h"

/**
 * _strlen - returning length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
