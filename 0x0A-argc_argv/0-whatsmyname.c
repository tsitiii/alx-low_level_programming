#include <stdio.h>

#include <main.h>

/**
 * main - returns the name of the program
 * argc - returns the number of arguments in argv
 * argv - returns the arguments in the command line
 * Return - 0(success)
 *
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
