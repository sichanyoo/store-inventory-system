/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
 * UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"
#include <string.h>

float dept_nine(Node *head, int print) {
	/*variable for user-input department substring*/
	char dept[30];
	/*variable to check if no item applies to given inquiry*/
	int ct = 0;
	
	/*string literals assigned to char ptr's for formatting*/
	char *col1 = "Stock#";
	char *col2 = "Quantity";
	char *col3 = "Department";
	char *col4 = "Item";

	/*prompt user to in put dept name / substring*/
	printf("\nEnter Department Name to print:");
	scanf(" %[^\n]", dept);
	
	/*print items w/ headers*/
	printf("\nGrocery Item List for \"%s\":\n", dept);
	printf("%s\t%10s\t%30s\t%50s\n", col1, col2, col3, col4);

	/*print each aplicable item*/
	while (head != NULL) {
		/*check if user-input string is a substring of department using strcasestr that ignores case*/
		if (strcasestr(head->grocery_item.department, dept) != NULL) {
			printf("%d\t%10d\t%30s\t%50s\n", 	head->grocery_item.stockNumber,
							head->grocery_item.pricing.wholesaleQuantity -
								head->grocery_item.pricing.retailQuantity,
							head->grocery_item.department, 
							head->grocery_item.item);
			/*change ct*/
			ct++;
		} 
		/*go to next node/item in the list*/
		head = head->next;
	}

	/*if no item was printed, say so*/
	if (ct == 0) printf("\n----No item exists under the given department inquiry---\n");

	/*dummy value*/
	return 0.0;
}

