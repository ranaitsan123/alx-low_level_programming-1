/*
 * File: 100-reverse_listint.c
 * Auth: aicha lahnite
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *premier, *dernier;

	if (head == NULL || *head == NULL)
		return (NULL);

	dernier = NULL;

	while ((*head)->next != NULL)
	{
		premier = (*head)->next;
		(*head)->next = dernier;
		dernier = *head;
		*head = premier;
	}

	(*head)->next = dernier;

	return (*head);
}
