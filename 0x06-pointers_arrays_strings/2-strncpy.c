#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the string pointed to by src,
 *            including the terminating null byte,
 * to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest; /* Store the original destination pointer */

	/* Copy at most n bytes from the source string to the destination */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest); /* Return the pointer to the destination string */
}
