/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES 
 * OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. 
 * NAME: SICHAN YUH*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/*this function writes current inventory to output file, frees all dynamically allocated memory
 * and exits program*/
void exit_twelve(Node **head, char *fileName) {
	/*output file pointer*/
	FILE *fp;
	/*pointer for prev node*/
	Node *prev;
	/*counter for items written to output*/
	int ct = 0;

	/*open output file for writing*/
	fp = fopen(fileName, "w");
	/*exit if output file could not be opened*/
	if (fp == NULL) {
		printf("\nError: Output file could not be opened.\n\n");
		exit(EXIT_FAILURE);
	}

	/*loop through the list and write to output file so that it can be used as input file later*/
	while (*(head) != NULL) {
		fprintf(fp, "%s\t%s\t%d\t%f\t%f\t%d\t%d\n", 	(*head)->grocery_item.item,
								(*head)->grocery_item.department,
								(*head)->grocery_item.stockNumber,
								(*head)->grocery_item.pricing.retailPrice,
								(*head)->grocery_item.pricing.wholesalePrice,
								(*head)->grocery_item.pricing.retailQuantity,
								(*head)->grocery_item.pricing.wholesaleQuantity);
		/*set prev header as head*/
		prev = *(head);
		/*progress head to next node and free the prev node*/
		*head = (*head)->next;
		free(prev);
		/*increase counter by one*/
		ct++;
	}	
	/*print how many items were written to the output file*/
	printf("\nA total of %d Grocery Item records were written to file \"%s\".\n\n", ct, fileName);

	/*close the file*/
	if (fclose(fp) != 0){ 
		printf("\nError: Could not close output file.\n\n");
		exit(EXIT_FAILURE);
	}
}

