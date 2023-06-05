#include "lists.h"

/**
 * check_cycle - checks if singly linked list has cycle in it
 * @list: pointer to beginning of node
 * Return: 0: no cycle, 1: there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *cur, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	cur = list;
	check = cur->next;
	while (cur != NULL && check->next != NULL
		&& check->next->next != NULL)
	{
		if (cur == check)
			return (1);
		cur = cur->next;
		check = check->next->next;
	}
	return (0);
}
