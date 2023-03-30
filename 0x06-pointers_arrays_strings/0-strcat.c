#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: output string
 * @src: input string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
