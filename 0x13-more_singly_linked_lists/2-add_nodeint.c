#include "lists.h"
#include <stdlib.h>

/**
 * Author: Oyem Samuel
 *
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to add to the list.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr;

    /* Check if head is NULL */
    if (head == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    ptr = malloc(sizeof(listint_t));
    if (ptr == NULL)
        return (NULL);

    /* Initialize the new node */
    ptr->n = n;
    ptr->next = *head;

    /* Update the head to point to the new node */
    *head = ptr;

    /* Return the address of the new node */
    return (ptr);
}