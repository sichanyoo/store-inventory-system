/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE 
 * OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. 
 * NAME: SICHAN YUH */

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/*this function inserts the node item to the linked list headed by head*/
void insert(Node **head, Node *item) {
	/*ptr declarations for traversal and insertion*/
	Node* traverse_ptr = *(head);
	Node *prev_ptr = traverse_ptr;

	/*head is null, or*/
	/*if the new item has smaller stock number than the head item
 	* then make the new item the head*/
	if ((*head) == NULL || (item->grocery_item.stockNumber < (*head)->grocery_item.stockNumber)) {
		/*set the next node of new item as the current head*/		
		item->next = *head;
		/*make the new item be the new head*/
		*(head) = item;
	} else {
		/*traverse through the list until correct spot is found*/
		while ((traverse_ptr->grocery_item.stockNumber < item->grocery_item.stockNumber) &&
			(traverse_ptr->next != NULL)) {
			prev_ptr = traverse_ptr;
			traverse_ptr = traverse_ptr->next;
		}
		/*if reached end of list AND item has bigger stock number than end item,
 		 * append item at end of list*/
		if (traverse_ptr->next == NULL && (traverse_ptr->grocery_item.stockNumber < item->grocery_item.stockNumber)) {
			traverse_ptr->next = item;
		} else {
		/*otherwise, insert item in middle of the list*/
			item->next = traverse_ptr;
			prev_ptr->next = item;
		}
	}
}

