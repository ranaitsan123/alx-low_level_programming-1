#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nouveau, *dernier;

	nouveau = malloc(sizeof(listint_t));
	if (nouveau == NULL)
		return (NULL);

	nouveau->n = n;
	nouveau->next = NULL;

	if (*head == NULL)
		*head = nouveau;

	else
	{
		dernier = *head;
		while (dernier->next != NULL)
			dernier = dernier->next;
		dernier->next = nouveau;
	}

	return (*head);
}
