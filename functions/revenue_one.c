#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"
#include <locale.h>

/*this function determines and prints (if print == YES)  total revenue of all grocery items &
 * it returns the total revenue*/
float revenue_one(Node *head, int print) {
	/*where the revenue sum will be stored*/
	float revenue = 0;

	/*add up all the revenues for each item/node in the list*/
	while (head != NULL) {
		revenue += head->grocery_item.pricing.retailPrice * head->grocery_item.pricing.retailQuantity;
		/*go to next item/node*/
		head = head->next;
	}

	/*print result if print is YES*/
	if (print == YES) {
		/*print the total revenue in USD format, with , every 3 digits*/
		setlocale(LC_NUMERIC, "");
		printf("\nTotal revenue: $%'.2f\n", revenue);
	}

	/*return the revenue value*/
	return revenue;
}

