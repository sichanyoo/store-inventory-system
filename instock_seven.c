/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF 
 * THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. 
 * NAME: SICHAN YUH*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/*this function prints all the grocery items in stock*/
float instock_seven(Node *head, int print) {
	/*stock variable*/
	int stock;
	/*variable to see if there is no instock item*/
	int ct = 0;

	/*string literals assigned to char ptr's for formatting*/
	char *col1 = "Stock#";
	char *col2 = "Quantity";
	char *col3 = "Department";
	char *col4 = "Item";

	/*print formatted headers*/
	printf("\nGrocery items in Stock:\n");
	printf("%s\t%10s\t%30s\t%50s\n", col1, col2, col3, col4);
	/*print each in-stock item, determined by stock > 0*/
	while (head != NULL) {
		stock = head->grocery_item.pricing.wholesaleQuantity -
			head->grocery_item.pricing.retailQuantity;
		if (stock > 0) {
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
	if (ct == 0) printf("\n----There's currently no in-stock items---\n");

	/*dummy value*/
	return 0.0;
}

