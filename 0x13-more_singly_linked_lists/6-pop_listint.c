#include "lists.h"

/**
 * pop_listint - deletes the first node in a linked list and returns its data.
 *
 * @head: pointer to the first node in the linked list
 * Return: the data inside the deleted node
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int num = (*head)->n;
	listint_t *old_head = *head;

	if (!head || !*head)
	{
		return (0);
	}
	*head = (*head)->next;
	free(old_head);

	return (num);
}
