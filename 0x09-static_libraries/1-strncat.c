#include "main.h"
/**
 * _strncat - used to concatenates two strings,
 * @dest: destination memo area
 * @src: source area
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int countt = 0, count2 = 0;

	while (*(dest + countt) != '\0')
	{
		countt++;
	}

	while (count2 < n)
	{
		*(dest + countt) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		countt++;
		count2++;
	}
	return (dest);
}
