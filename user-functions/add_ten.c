#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

/*this function allows user to input a new item*/
void add_ten(Node **head, char *fileName) {
	/*new node*/
	Node *item = (Node *)malloc(sizeof(Node));
	if (item == NULL) {
		printf("\nError: Node memory allocation failed.\n\n");
		exit(EXIT_FAILURE);
	}

	/*prompt and store to item, the user input to each field of new item*/
	printf("\nEnter grocery item name:");
	scanf(" %[^\n]", item->grocery_item.item);
	printf("Enter Department:");
	scanf(" %[^\n]", item->grocery_item.department);
	printf("Enter item stock number:");
	scanf(" %d", &(item->grocery_item.stockNumber));
	printf("Enter item retail price:");
	scanf(" %f", &(item->grocery_item.pricing.retailPrice));
	printf("Enter item Wholesale price:");
	scanf(" %f", &(item->grocery_item.pricing.wholesalePrice));
	printf("Enter item retail quantity:");
	scanf(" %d", &(item->grocery_item.pricing.retailQuantity));
	printf("Enter item Wholesale quantity:");
	scanf(" %d", &(item->grocery_item.pricing.wholesaleQuantity));

	/*check if stock number is in the list*/
	/*if it is already in the list, print error message*/
	if (inList(*head, item->grocery_item.stockNumber) == YES) {
		printf("\nError: The stock number for the item you entered already exists in the inventory list.\n\n");
		/*free item memory*/
		free(item);
	} else {
		/*insert the new node to the list*/
		insert(head, item);
	}
}

