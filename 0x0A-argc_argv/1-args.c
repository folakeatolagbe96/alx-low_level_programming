#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of the arguments passed to the program
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
