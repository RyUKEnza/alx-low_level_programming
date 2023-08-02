#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_src = src;
	char *ptr_dest = dest;

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_src++;
		ptr_dest++;
		n--;
	}

	return (dest);
}
