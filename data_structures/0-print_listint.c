#include "lists.h"

/**
 * print_listint - print all element of a linked list
 * @h: pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
