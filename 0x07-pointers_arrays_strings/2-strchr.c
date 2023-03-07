#include <stdio.h>
#include "main.h"

/**
 * _strchur - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchur(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
