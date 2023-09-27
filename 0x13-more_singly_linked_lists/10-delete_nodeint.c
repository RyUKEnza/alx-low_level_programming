#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, -1 if the node at the given index does not exist.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index - 1)
		{
			temp = current->next;
			if (temp == NULL)
				return (-1);

			current->next = temp->next;
			free(temp);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
