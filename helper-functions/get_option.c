#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

/*this function prompts and reads in an user-input option*/
int get_option() {
	/*opt var to hold  user-input*/	
	int opt;

	/*print the prompts*/
	printf("\nPlease enter an integer between 1 and 12:\n");
	printf("1) Print Total Revenue\n");
	printf("2) Print Total Wholesale Cost\n");
	printf("3) Print Current Grocery Item Investment\n");
	printf("4) Print Current Profit\n");
	printf("5) Print Total Number of Grocery Items Sold\n");
	printf("6) Print Average Profit per Grocery Item\n");
	printf("7) Print Grocery Items In Stock\n");
	printf("8) Print Out of Stock Grocery Items\n");
	printf("9) Print Grocery Items for a Department\n");
	printf("10) Add Grocery Items to Inventory\n");
	printf("11) Delete Grocery Item from Inventory\n");
	printf("12) Exit Program\n");
	printf("\nOption:");
	
	/*get user input and return it*/
	scanf("%d", &opt);
	return opt;
}

