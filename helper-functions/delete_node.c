#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

/*this function deletes a node/item from list given the stock number*/
void delete_node(Node **head, int num) {
	/*node ptrs for traversal and prev nodes*/
	Node *traversal = (*head);
	Node *prev = traversal;

	/*if head is null, it is empty list, so print error message*/
	if ((*head) == NULL) {
		printf("\nError: Delete_node function is called on an empty list.\n\n");
	/*head is node to be deleted*/
	} else if (traversal->grocery_item.stockNumber == num) {
		traversal = traversal->next;
		(*head) = traversal;
		free(prev);
	} else {
		/*iterate untilt traversal points to the node with stock number*/
		while (traversal->grocery_item.stockNumber != num) {
			prev = traversal;
			traversal = traversal->next;
		}
		/*then make prev point to next of traversal, and free traversal*/
		prev->next = traversal->next;
		free(traversal);
	}
}

