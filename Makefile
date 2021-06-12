#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
#TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.
#NAME: SICHAN YUH

gcc_opt = -ansi -pedantic -g -c -D DEBUG

#all target
all: lab4.zip lab4

#zip file target, the things that's submitted to carmen
lab4.zip: Makefile lab4main.c lab4Readme lab4.h read_inventory.c insert.c get_option.c getNode.c inList.c delete_node.c revenue_one.c cost_two.c investment_three.c profit_four.c sold_five.c avgProfit_six.c instock_seven.c outstock_eight.c dept_nine.c add_ten.c delete_eleven.c exit_twelve.c
	zip lab4.zip Makefile lab4main.c lab4Readme lab4.h read_inventory.c insert.c get_option.c getNode.c inList.c delete_node.c revenue_one.c cost_two.c investment_three.c profit_four.c sold_five.c avgProfit_six.c instock_seven.c outstock_eight.c dept_nine.c add_ten.c delete_eleven.c exit_twelve.c 

#executable target
lab4: lab4main.o read_inventory.o insert.o get_option.o getNode.o inList.o delete_node.o revenue_one.o cost_two.o investment_three.o profit_four.o sold_five.o avgProfit_six.o instock_seven.o outstock_eight.o dept_nine.o add_ten.o delete_eleven.o exit_twelve.o
	gcc lab4main.o read_inventory.o insert.o get_option.o getNode.o inList.o delete_node.o revenue_one.o cost_two.o investment_three.o profit_four.o sold_five.o avgProfit_six.o instock_seven.o outstock_eight.o dept_nine.o add_ten.o delete_eleven.o exit_twelve.o -o lab4

#.o files for the .c main file and 12 .c option files and misc. function .c files
lab4main.o:  lab4main.c lab4.h
	gcc $(gcc_opt) lab4main.c

read_inventory.o: read_inventory.c lab4.h
	gcc $(gcc_opt) read_inventory.c

insert.o: insert.c lab4.h
	gcc $(gcc_opt) insert.c

get_option.o: get_option.c lab4.h
	gcc $(gcc_opt) get_option.c

getNode.o: getNode.c lab4.h
	gcc $(gcc_opt) getNode.c

inList.o: inList.c lab4.h
	gcc $(gcc_opt) inList.c

delete_node.o: delete_node.c lab4.h
	gcc $(gcc_opt) delete_node.c

revenue_one.o: revenue_one.c lab4.h
	gcc $(gcc_opt) revenue_one.c

cost_two.o: cost_two.c lab4.h
	gcc $(gcc_opt) cost_two.c

investment_three.o: investment_three.c lab4.h
	gcc $(gcc_opt) investment_three.c

profit_four.o: profit_four.c lab4.h
	gcc $(gcc_opt) profit_four.c

sold_five.o: sold_five.c lab4.h
	gcc $(gcc_opt) sold_five.c

avgProfit_six.o: avgProfit_six.c lab4.h
	gcc $(gcc_opt) avgProfit_six.c

instock_seven.o: instock_seven.c lab4.h
	gcc $(gcc_opt) instock_seven.c

outstock_eight.o: outstock_eight.c lab4.h
	gcc $(gcc_opt) outstock_eight.c

dept_nine.o: dept_nine.c lab4.h
	gcc $(gcc_opt) dept_nine.c

add_ten.o: add_ten.c lab4.h
	gcc $(gcc_opt) add_ten.c

delete_eleven.o: delete_eleven.c lab4.h
	gcc $(gcc_opt) delete_eleven.c

exit_twelve.o: exit_twelve.c lab4.h
	gcc $(gcc_opt) exit_twelve.c

#clean target to delete all .o files and lab4 executable as well as the lab4.zip file
clean:
	rm -rf *.o lab4 lab4.zip

