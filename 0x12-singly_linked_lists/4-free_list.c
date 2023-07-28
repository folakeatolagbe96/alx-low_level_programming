#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *current_node;
	
	while ((current_node = head) != Null)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
