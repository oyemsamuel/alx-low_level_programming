#include "lists.h"
#include <stdlib.h>

/**
 * Author: Oyem Samuel
 *
 * free_listint - Frees a listint_t list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: No return value (void).
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		/* Store the next node to avoid losing reference */
		next = head->next;
		/* Free the current node */
		free(head);
		/* Move to the next node */
		head = next;
	}
}