/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO 
 * THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH 
 * RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/


#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"
#include <locale.h>

/*this function determines and prints (if print == YES) and returns total investment of all grocery items*/
float investment_three(Node *head, int print) {
	/*where the investment sum will be stored*/
	float investment = 0;

	/*add up all the investment for each node in the list*/
	while (head != NULL) {
		investment += 	head->grocery_item.pricing.wholesalePrice  *
				(head->grocery_item.pricing.wholesaleQuantity - 
					head->grocery_item.pricing.retailQuantity);
		/*go to next node/item in the list*/
		head = head->next;
	}

	/*print if print == YES*/
	if (print == YES) {
		/*print the total investment in USD format, with , every 3 digits*/
		setlocale(LC_NUMERIC, "");
		printf("\nTotal Wholesale Investment: $%'.2f\n", investment);
	}

	/*return investment*/
	return investment;
}

