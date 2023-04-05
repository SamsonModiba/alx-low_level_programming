#include "lists.h"

/**
 * add_nodeint -  addsnew note at the start 
 * @head: pointer
 * @n: data to insert that new node 
 * return: pointer to new node 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;


	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new -> n = n;
	*head =new;


	return (new);
}
