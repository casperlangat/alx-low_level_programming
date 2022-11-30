#include "lists.h"

/**
 * free_listint - free a linked a list
 * @head: head of list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp =  head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
