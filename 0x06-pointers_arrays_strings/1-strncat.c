#include "main.h"

/**
 * _strcat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: nummber of char to be copied
 * Return: dest
 */

char *_strncat(char *dest, char  *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
