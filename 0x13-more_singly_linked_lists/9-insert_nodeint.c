#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of the linked list
 * @idx: index of the list where the new node is added
 * @n: data to be assigned to the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = NULL;
	current = *head;
	for (i = 0; i < idx && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (i != idx)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	prev->next = new;
	return (new);
}

