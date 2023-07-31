#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Author: Oyem Samuel
 *
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;

    /* Add nodes to the end of the list */
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    /* Print the content of the list */
    print_listint(head);

    /* Free the memory allocated for the list */
    free_listint(head);

    head = NULL; /* Reset the head to NULL */

    return (0);
}


