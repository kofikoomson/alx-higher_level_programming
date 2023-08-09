#include "lists.h"

/**
 * check_cycle - check for loop in link
 * @list: head of linked list
 * Description - check for loops in link
 * Return: 1 cycle, 0 no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
