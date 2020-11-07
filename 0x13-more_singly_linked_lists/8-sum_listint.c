#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data (n)
 * @head: the header node next node
 * Return: sum of data node sum
*/
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
