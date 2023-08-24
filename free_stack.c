#include "monty.h"
/**
* free_stack - frees a doubly linkeds lists
* @head: heads of d stacks
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
