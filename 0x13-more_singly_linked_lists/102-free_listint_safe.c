/*
 * File: 102-free_listint_safe.c
 * Auth: aicha lahnit
 */

#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tort, *rubi;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	rubi = (head->next)->next;

	while (rubi)
	{
		if (tort == rubi)
		{
			tort = rubi;
			while (tort != rubi)
			{
				nd++;
				tort = tort->next;
				rubi = rubi->next;
			}

			tort = tort->next;
			while (tort != rubi)
			{
				nd++;
				tort = tort->next;
			}

			return (nd);
		}

		tort = tort->next;
		rubi = (rubi->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nd, i;

	nd = looped_listint_count(*h);

	if (nd == 0)
	{
		for (; h != NULL && *h != NULL; nd++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (i = 0; i < nd; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nd);
}
