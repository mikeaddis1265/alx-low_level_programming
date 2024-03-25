#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	unsigned int count;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	temp = *h;
	if (temp == NULL)
	{
		*h = new;
		return (new);
	}
	for (count = 0; count < idx; count++)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}
	}
	if (temp == NULL)
	{
		new->prev = temp->prev;
		temp->prev->next = new;
		temp->prev = new;
	}
	else
	{
		new->next = temp;
		new->prev = temp->prev;
		if (temp->prev != NULL)
		{
			temp->prev->next = new;
		}
		temp->prev = new;
	}

	return (new);
}