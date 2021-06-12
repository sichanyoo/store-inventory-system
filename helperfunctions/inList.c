#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

/*this function returns YES or NO on whether given stock number exists in the list already*/
int inList(Node *head, int num) {
	/*search list for matching stock number*/
	while (head != NULL) {
		if (head->grocery_item.stockNumber == num) {
			return YES;
		}
		head = head->next;
	}	

	/*reaching this point means num hasn't been found*/
	return NO;
}

