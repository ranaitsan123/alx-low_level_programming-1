/*
 * File: 101-print_listint_safe.c
 * Auth: aicha lahnite
 */

#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tr, *rb;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tr = head->next;
	rb = (head->next)->next;

	while (rb)
	{
		if (tr == rb)
		{
			tr = rb;
			while (tr != rb)
			{
				nd++;
				tr = tr->next;
				rb = rb->next;
			}

			tr = tr->next;
			while (tr != rb)
			{
				nd++;
				tr = tr->next;
			}

			return (nd);
		}

		tr = tr->next;
		rb = (rb->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, i = 0;

	nd = looped_listint_len(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nd; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nd);
}
