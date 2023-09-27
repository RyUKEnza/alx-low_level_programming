#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) in a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data (n), or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

