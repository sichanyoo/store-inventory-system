#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"
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

