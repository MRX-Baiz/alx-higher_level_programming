#include "lists.h"

/**
 * insert_node - inserts number into a sorted singly-linked list
 * @head: pointer the head of the linked list
 * @number: number to insert
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *nod = *head, *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = number;
	if (nod == NULL || nod->n >= number)
	{
		nw->next = nod;
		*head = nw;
		return (nw);
	}
	while (nod && nod->next && nod->next->n < number)
		nod = nod->next;
	nw->next = nod->next;
	nod->next = nw;
	return (new);
}
