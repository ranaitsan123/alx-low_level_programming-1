/*
 * File: 103-find_loop.c
 * Auth: aicha lahnite
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *rubi;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tort = head->next;
	rubi = (head->next)->next;

	while (rubi)
	{
		if (tort == rubi)
		{
			tort = head;

			while (tort != rubi)
			{
				tort = tort->next;
				rubi = rubi->next;
			}

			return (tort);
		}

		tort = tort->next;
		rubi = (rubi->next)->next;
	}

	return (NULL);
}
