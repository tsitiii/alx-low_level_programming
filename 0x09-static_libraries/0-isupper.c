#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return,if c is uppercase return 1 if not then 0
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
        	return (1);
	else
		return 0;
}
