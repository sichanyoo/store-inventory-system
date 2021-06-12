/*determine whether to print to screen or not*/
#define YES 1
#define NO 0

/*struct definitions*/
struct Cost {
	float wholesalePrice;
	float retailPrice;
	int wholesaleQuantity;
	int retailQuantity;
};

struct Data {
	char item[50];
	char department[30];
	int stockNumber;
	struct Cost pricing;
};

typedef struct Node {
	struct Data grocery_item;
	struct Node *next;
}Node;

/*function prototypes*/

/*general*/
Node* read_inventory(char* fileName);
int get_option();
void insert(Node **head, Node *item);
int getNode(FILE *fp, Node **item);
int inList(Node *head, int num);
void delete_node(Node **head, int num);

/*option functions that don't modify list*/
float revenue_one(Node *head, int print);
float cost_two(Node *head, int print);
float investment_three(Node *head, int print);
float profit_four(Node *head, int print);
float sold_five(Node *head, int print);
float avgProfit_six(Node *head, int print);
float instock_seven(Node *head, int print);
float outstock_eight(Node *head, int print);
float dept_nine(Node *head, int print);

/*option functions that modify the list*/
void add_ten(Node **head, char *fileName);
void delete_eleven(Node **head, char *fileName);
void exit_twelve(Node **head, char *fileName);

