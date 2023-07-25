#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	int length = 0;
	int index = 0;
	char *ptr = str;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
		length++;
	}

	index = length - 1;
	for (i = 0; i <= index; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
