#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    	listint_t *head;

   	head = NULL;
    	add_nodeint(&head, 81);
   	add_nodeint(&head, 72);
    	add_nodeint(&head, 27);
    	add_nodeint(&head, 1);
    	add_nodeint(&head, 4);
    	add_nodeint(&head, 3);
    	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 5, 4096);
    	print_listint(head);
    	return (0);
}
