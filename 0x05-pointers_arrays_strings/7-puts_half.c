#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	char *ptr = str;
	int i, start;

	while (*ptr != '\0')
	{
		ptr++;
		length++;
	}

	start = length / 2 + length % 2;
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
