/*
 * File: 5-free_listint2.c
 * Auth: AICHA LAHNITE
 */

/** free_listint2 - Fres a listint_t list.
*
* @head: A pointer to the head of the listint_t list to be freed.
*/

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = *head->next;
		free(*head);
		*head = t;
	}
}
