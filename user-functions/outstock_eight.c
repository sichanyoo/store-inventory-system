#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

/*this function prints all the grocery items out of stock*/
float outstock_eight(Node *head, int print) {
	int stock;
	/*variable to check if no outstock items*/
	int ct = 0;

	/*string literals stored to char ptrs for formatting*/
	char *col1 = "Stock#";
	char *col2 = "Quantity";
	char *col3 = "Department";
	char *col4 = "Item";

	/*print formatted headers*/
	printf("\nGrocery Items Out of Stock:\n");
	printf("%s\t%10s\t%30s\t%50s\n", col1, col2, col3, col4);
	/*print each out-of-stock item, defined as stock == 0*/
	while (head != NULL) {
		stock = head->grocery_item.pricing.wholesaleQuantity -
			head->grocery_item.pricing.retailQuantity;
		if (stock ==  0) {
			printf("%d\t%10d\t%30s\t%50s\n", 	head->grocery_item.stockNumber,
							stock,
							head->grocery_item.department,
							head->grocery_item.item);
			/*change ct*/
			ct++;
		}		 
		head = head->next;
	}

	/*if no item was printed, say so*/
	if (ct == 0) printf("\n----There is currently no out of stock items---\n");

	/*dummy value*/
	return 0.0;
}

