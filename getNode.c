/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
 * UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/


#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/*this function reads in a single inventory item and returns eof indicator*/
int getNode(FILE *fp, Node **item) {
	/*eof indicator*/
	int is_eof;
	/*newline holder*/
	char newLine;
	/*read into input node, item*/
	is_eof = fscanf(fp, "%[^\t] %[^\t] %d %f %f %d %d", 	(*item)->grocery_item.item,
								(*item)->grocery_item.department,
								&((*item)->grocery_item.stockNumber),
								&((*item)->grocery_item.pricing.retailPrice),
								&((*item)->grocery_item.pricing.wholesalePrice),
								&((*item)->grocery_item.pricing.retailQuantity),
								&((*item)->grocery_item.pricing.wholesaleQuantity));
	/*consume possible newline character*/
	fscanf(fp, "%c", &newLine);

	/*return the eof indicator*/
	return is_eof;
}
