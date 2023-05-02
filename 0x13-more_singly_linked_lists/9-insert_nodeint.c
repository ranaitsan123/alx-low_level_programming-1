/*
 * File: 9-insert_nodeint.c
 * Auth: aicha lahnite
 */

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - ...
  * @head: ...
  * @idx: ...
  * @n: ...
  *
  * Return: ...
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nouveau, *iter;
	unsigned int c = 1;

	if (head)
	{
		nouveau = malloc(sizeof(listint_t));
		if (nouveau == NULL)
			return (NULL);

		nouveau->n = n;
		if (idx > 0)
		{
			iter = *head;
			while (iter)
			{
				if (c == idx)
				{
					nouveau->next = iter->next;
					iter->next = nouveau;
					return (nouveau);
				}
				iter = iter->next;
				c++;
			}
			if (idx > c)
				return (NULL);
		}
		else
		{
			nouveau->next = *head;
			*head = nouveau;
		}
		return (nouveau);
	}
	return (NULL);
}
