#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Author: Oyem Samuel
 *
 * main - Function to test the add_nodeint and print_listint functions.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    /* Initialize the head pointer to NULL */
    head = NULL;

    /* Add nodes to the linked list */
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);

    /* Print the elements of the linked list */
    print_listint(head);

    return (0);
}