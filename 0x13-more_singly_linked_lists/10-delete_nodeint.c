/*
 * File: 10-delete_nodeint.c
 * Auth: aicha lahnite
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *p = *head;
	unsigned int nd;

	if (p == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	for (nd = 0; nd < (index - 1); nd++)
	{
		if (p->next == NULL)
			return (-1);

		p = p->next;
	}

	tmp = p->next;
	p->next = tmp->next;
	free(tmp);

	return (1);
}
