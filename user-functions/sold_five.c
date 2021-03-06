#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"


/*this function determines and returns the total number of units sold*/
float sold_five(Node *head, int print) {
	/*variable that stores the sum*/
	int sum = 0;

	/*get sum*/
	while (head != NULL) {
		sum = sum + head->grocery_item.pricing.retailQuantity;
		/*go to next node/item in the list*/
		head = head->next;
	}

	/*print sum if print == YES*/
	if (print == YES) {
		printf("\nTotal number of groceries sold: %d\n", sum);
	}

	/*return sum in float, to allow for float division in avgProfit_six.c*/
	return (float)sum;
}

