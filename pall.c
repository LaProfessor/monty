#include "monty.h"
/**
 * f_pall - prints d stacks
 * @head: stacks heads
 * @counter: nos useds
 * Return: nos returns
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
