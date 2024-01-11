#include"lists.h"
/**
 * print_dlistint - print all the element
 * @h: pointer to the list
 * Return:number of node
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;

		node = node->next;
	}
	return (cont);
}
