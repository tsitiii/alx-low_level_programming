#include <stdio.h>

#include "main.h"

/**
 * main - returns the number of arguments passed on it
 *
 * argc - returns an integer value of argv
 * argv - returns command line values
 *
 * Retrun  - alwasy 0 success
 */ 
int main(int argc, char *argv[])
{
(void) argv;
print("%d\n", (argc - 1));
	return (0);
}
