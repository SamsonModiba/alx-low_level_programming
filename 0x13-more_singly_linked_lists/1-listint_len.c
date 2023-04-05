#include "lists.h"


/**
 * listint_len - gives back the number of elemens
 * @h: linked lists
 *
 *
 * return : count of nodes
 */
size_t listint_len(const listint_t *h)
	{
		size_t num =0;
		while (h)
		{
			num++;
			h = h -> next;
		}
		return (num);
	}
