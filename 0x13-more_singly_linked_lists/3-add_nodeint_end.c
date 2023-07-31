#include "lists.h"
#include <stdlib.h>

/**
 * Author: Oyem Samuel
 *
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Integer value to add to the new node.
 *
 * Return: Pointer to the newly added node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/* Initialize the new node with the provided integer value */
	new->n = n;
	new->next = NULL;

	/* If the linked list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Find the last node in the linked list */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Add the new node to the end of the linked list */
	temp->next = new;

	return (new);
}