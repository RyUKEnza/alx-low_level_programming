#include "main.h"
/**
 * _strcpy - Copies the string pointed
 * to by src to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: The pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0'; /* Add the terminating null byte */

	return (original_dest);
}
