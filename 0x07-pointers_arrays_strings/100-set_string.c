#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 *
 * Description: This function updates the value of `s` to point to the memory
 *              location pointed to by `to`.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
