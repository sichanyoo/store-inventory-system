/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE
 *  UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/*the main function with function pointer array declarations*/
int main(int argc, char* argv[]) {
	/*integer to hold option input from user*/
	int op;
	/*head node*/
	Node *head;	

	/*array of functions that do not change list*/
	float (*func[9]) (Node *head, int print) =	{revenue_one, cost_two, investment_three, profit_four,
							sold_five, avgProfit_six, instock_seven, outstock_eight,
							dept_nine};
	/*array of functions that change list*/
	void (*opfunc[3]) (Node **head, char *fileName) = {add_ten, delete_eleven, exit_twelve};
	
	/*print error message and exit program if num of command line arugments is not 3*/
	if (argc != 3) {
		printf("\nUSAGE: Wrong number of command line arguments.\n");
		printf("Required: 2\n");
		printf("Given by user: %d\n\n", argc);
		return(EXIT_FAILURE);
	}

	/*read inventory into linked list and return head pointer*/
	head = read_inventory(argv[1]);
	/*handle user interaction with data / program*/
	while (op != 12) {
		op = get_option();
		if (op < 10) {
			func[op-1](head, YES);
		} else if (op > 9) {
			opfunc[op-10](&head, argv[2]);
		}
	}	
}

