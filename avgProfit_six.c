/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY 
 * ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC 
 * INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. NAME: SICHAN YUH*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"
#include <locale.h>

/*this function determines and prints (if print == YES) and returns average profit per sale*/
float avgProfit_six(Node *head, int print) {
	/*calculate average profit per sale*/
	float avg = profit_four(head, NO)/sold_five(head, NO);

	/*print average profit if print == YES*/
	if (print == YES) {
		setlocale(LC_NUMERIC, "");
		printf("\nAverage Profit: $%'.2f\n", avg);
	}

	/*return average profit*/
	return avg;
}

