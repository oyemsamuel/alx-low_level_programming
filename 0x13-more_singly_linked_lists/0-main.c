#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* 
 * main - Entry point of the program to check the code.
 * This program demonstrates the basic functionality of linked lists
 * defined in the "lists.h" header file.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    /* Initialize the head of the linked list with the hello node. */
    head = &hello;

    /* Create a new node using dynamic memory allocation. */
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error: Memory allocation failed\n");
        return (1);
    }

    /* Set the value and next pointer for the new node. */
    new->n = 9;
    new->next = head;
    head = new;

    /* Print the elements of the linked list and get the number of elements. */
    n = print_listint(head);
    printf("-> %lu elements\n", n);

    /* Free the memory allocated for the new node. */
    free(new);

    return (0);
}