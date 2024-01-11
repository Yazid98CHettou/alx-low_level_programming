#include"lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->prev = NULL;
	a->next = *head;
	if (*head)
		(*head)->prev = a;
	*head = a;

	return (a);
}
