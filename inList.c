/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO 
 * STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

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

