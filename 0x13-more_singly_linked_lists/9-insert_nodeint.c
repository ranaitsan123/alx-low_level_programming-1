/*
 * File: 9-insert_nodeint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nouveau, *p = *head;
	unsigned int nd;

	nouveau = malloc(sizeof(listint_t));
	if (nouveau == NULL)
		return (NULL);

	nouveau->n = n;

	if (idx == 0)
	{
		new->next = p;
		*head = nouveau;
		return (nouveau);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (p == NULL || p->next == NULL)
			return (NULL);

		p = p->next;
	}

	new->next = p->next;
	p->next = nouveau;

	return (nouveau);
}
