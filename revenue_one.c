/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO 
 * STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/


#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"
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

