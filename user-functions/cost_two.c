#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"
#include <locale.h>

/*this function determines and prints (if print == YES) and returns the total cost of all grocery items*/
float cost_two(Node *head, int print) {
	/*where the cost sum will be stored*/
	float cost = 0;

	/*add up all the cost for each node in the list*/
	while (head != NULL) {
		cost += head->grocery_item.pricing.wholesalePrice * head->grocery_item.pricing.wholesaleQuantity;
		/*go to next node/item in the list*/
		head = head->next;
	}

	/*print if print = YES*/
	if (print == YES) {
		/*print the total cost in USD format, with , every 3 digits*/
		setlocale(LC_NUMERIC, "");
		printf("\nTotal Wholesale cost: $%'.2f\n", cost);
	}

	/*return cost*/
	return cost;
}

