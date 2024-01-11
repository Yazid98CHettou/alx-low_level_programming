#include"lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ne, *au = *head;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->next = NULL;

	if (au)
	{
		while (au->next)
			au = au->next;
		ne->prev = au;
		au->next = ne;
	}
	else
	{
		*head = ne;
		ne->prev = NULL;
	}
	return (ne);
}
