#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

