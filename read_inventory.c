/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE 
 * OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. 
 * NAME: SICHAN YUH */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

/*this function reads the store_inventory and creates a linked list*/
Node* read_inventory(char *fileName) {
	/*EOF indicator*/
	int is_eof;
	/*pointer to head node*/
	Node *head;
	/*length of list*/
	int len = 1;
	/*file pointer*/
	FILE *fp;

	/*allocate memory for pointer to head node*/
	head = (Node *)malloc(sizeof(Node));
	if (head == NULL) {
		printf("\nError: Head node memory allocation failed.\n\n");
		exit(EXIT_FAILURE);
	}
	head->next = NULL;

	/*open the input file for reading*/
	fp = fopen(fileName, "r");
	/*exit program if input file couldn't be opened*/
	if (fp == NULL) {
		printf("\nError: Input file could not be opened.\n\n");
		exit(EXIT_FAILURE);
	}
	

	/*read in first item to head*/
	is_eof = getNode(fp, &head);	
	/*consume possible newline character after first item*/
	fscanf(fp, "%c", &is_eof);	

	/*print out message indicating start of reading file*/
	printf("\nReading inventory from file \"%s\"\n", fileName);

	/*read each line/item until EOF is reached*/
	while (is_eof != EOF) {
		/*new node for each new item*/
		Node *item;
		item = (Node *)malloc(sizeof(Node));
		/*if allocation failed, exit*/
		if (item == NULL) {
			printf("\nError: Node memory allocation failed.\n\n");
			exit(EXIT_FAILURE);
		}	

		/*read the next inventory item*/
		is_eof = getNode(fp, &item);

		/*...and add to list if is_eof is not EOF*/
		if (is_eof != EOF) {
			insert(&head, item);
			/*increase length by 1*/
			len++;
		} else {
			/*if EOF, free memory of item*/
			free(item);
			item = NULL;
		}
	}
	
	/*print how many items have been read*/
	printf("A total of %d items were read into inventory from the file \"%s\".\n", len, fileName);

	/*close the input file*/
	if (fclose(fp) != 0) {
		printf("\nError: Coudl not close the input file.\n\n");
		exit(EXIT_FAILURE);
	}

	/*return Node* to head node*/
	return head;
}

