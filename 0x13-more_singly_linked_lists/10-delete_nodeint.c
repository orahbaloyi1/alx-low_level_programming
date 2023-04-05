#include "lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element
 * @index: index of the node
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *temp = NULL;
	 listint_t *current = *head;
	 unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (;current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
