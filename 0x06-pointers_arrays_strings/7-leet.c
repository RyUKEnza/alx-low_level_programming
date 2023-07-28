#include "main.h"
/**
 * leet - Encode a string into "1337" (Leet Speak).
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "AEOTL";
	char leet_codes[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j] || str[i] == leet_letters[j] + 32)
			{
				str[i] = leet_codes[j];
				break;
			}
		}
	}

	return (str);
}
