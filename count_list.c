#include "lists.h"

void count_list(struct list *head)
{
    struct list *ptr, *a1, *a2, *a3;
    int no = 0;

    if (head == NULL)
    {
	printf("Nothing come out!\n");
	exit(1);
    }

    ptr = head;
    while (ptr != NULL)
    {
	if (no == 1)
	    a1 = ptr;
	else if (no == 2)
	    a2 = ptr;
	else
	    a3 = ptr;

	no++;
	ptr = ptr->link;

    }
    printf("The list has %d nodes\n", no);
    printf("a1: %p\na2: %p\na3: %p\n", a1, a2, a3);
}
