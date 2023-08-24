#include "monty.h"
/**
 * f_pstr - prints d string starting at d top of d stacks,
 * followed by as news
 * @head: stacks heads
 * @counter: lines_numbers
 * Return: nos returns
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
