#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"
#include <locale.h>

/*this function determines and prints (if print == YES) and returns total profit of all grocery items*/
float profit_four(Node *head, int print) {
	/*calculate profit using revenue_one(), cost_two(), and investment_three()*/	
	float profit = (revenue_one(head, NO)) - (cost_two(head, NO)) + (investment_three(head, NO));

	/*print if print = YES*/
	if (print == YES) {
		/*print the total profit in USD format, with , every 3 digits*/
		setlocale(LC_NUMERIC, "");
		printf("\nTotal profit: $%'.2f\n", profit);
	}

	/*return profit*/
	return profit;
}

