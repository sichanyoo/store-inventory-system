/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE 
 * OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/


#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"
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

