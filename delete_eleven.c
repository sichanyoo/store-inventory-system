/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE 
 * OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/


#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/*this function allows user to delete an item with stock number*/
void delete_eleven(Node **head, char *fileName) {
	int num;
	/*prompt user to enter a item stock number to delete & scan input*/
	printf("\nPlease enter the grocery item stock number you wish to delete, followed by enter:");
	scanf(" %d", &num);

	/*if the given stock number does not exist, print error message*/
	if (inList(*head, num) == NO) {
		printf("\nError: Grocery item stock number %d does not exist in the inventory list.\n\n", num);
	} else {
		/*otherewise, delete the element*/
		delete_node(head, num);
		/*print confirmation message*/
		printf("\nGrocery item stock number %d was deleted.\n\n", num);
	}
}

