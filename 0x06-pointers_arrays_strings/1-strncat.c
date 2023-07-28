#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from the source string to the
 *            destination string.
 * @dest: The destination string to which the source will be appended.
 * @src: The source string to be appended to the destination.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest; /* Store the original destination pointer */

	/* Move the destination pointer to the end of the string */
	while (*dest)
		dest++;

	/* Copy at most n bytes from the source string to the destination */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*dest = '\0';

	return (original_dest); /* Return the pointer to the resulting string */
}
