#include "sort.h"

/**
* swap_el - Swap nodes on list.
* @list: pointer to head of list.
* @curr: pointer to current node of list.
* @prevv: pointer to previous node of list.
*/


void swap_el(listint_t **list, listint_t *curr, listint_t *prevv)
{

	if (curr->next)
		(curr->next)->prev = prevv;

	curr->prev = prevv->prev;
	curr->next = prevv;

	if (prevv->prev)
		(prevv->prev)->next = curr;
	else
		(*list) = curr;
}

/**
 * insertion_sort_list - Sort list in ascending with insertion sort algorithm
 * @list: list of integers
 * Return: nothing
 */


void insertion_sort_list(listint_t **list)
{

	listint_t *prevv = NULL, *curr = NULL, *next = NULL;

	if (!list || !(*list))
		return;

	curr = (*list)->next;
	while (curr)
	{
		next = curr->next;
		prevv = curr->prev;

		while (prevv && curr->n < prevv->n)
		{
			prevv->next = curr->next;

			swap_el(list, curr, prevv);
			prevv->prev = curr;
			prevv = curr->prev;

			print_list(*list);
		}
		curr = next;
	}
}
