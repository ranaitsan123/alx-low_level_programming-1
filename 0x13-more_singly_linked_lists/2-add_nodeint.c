#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the info of n in the added node.
 * Return: The number of nodes in the list_t list.
 */

 listint_t *add_nodeint(listint_t **head, const int n){
   while (head){
         listint_t nouveau = (listint-t)malloc(sizeof(struct listint_s));
	 nouveau->n = n;
	 nouveau->suiv = head;
	 head = nouveau;

	 return (head);
   }

   return (NULL):
}
