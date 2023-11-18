#include "main.h"
/**
 * _memcpy - it copies memory area,
 * @dest: is the destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: it returns the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
