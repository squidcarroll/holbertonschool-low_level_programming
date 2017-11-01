#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: linked list
 * @idx: posisiton to insert
 * @n: data
 * Return: address of new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *traverse = *head;
	unsigned int pos;

	if (!(*head))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		return (*head = new_node);
	}
	else
	{
		pos = 1;
		while (traverse)
		{
			if (idx == pos)
			{
				new_node->next = traverse->next;
				traverse->next = new_node;
				return (*head);
			}
			traverse = traverse->next;
			pos++;
		}
	}
	free(new_node);
	return (NULL);
}
