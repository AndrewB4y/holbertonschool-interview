#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to the first node in the linked listint_t list.
 * @number: int value to be assigned to the new added node.
 *
 * Return: the addres of the new node, or NULL if it failed.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL;
	listint_t *node = NULL;
	listint_t *node_1 = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (head == NULL || *head == NULL)
		return (new);

	node = *head;
	while (node != NULL && node->n < number)
	{
		node_1 = node;
		node = node->next;
	}
	if (node_1 == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (node == NULL)
	{
		node_1->next = new;
		return (new);
	}
	if (node != NULL && node_1 != NULL)
	{
		node_1->next = new;
		new->next = node;
		return (new);
	}
	free(new);
	return (NULL);
}
