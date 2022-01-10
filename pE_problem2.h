#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
Problem Description
===================

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

Steps to solve:
===============

1) Generate Fibonacci sequence up to 4 million:
	a) Because we don't know where 4M is in the 
	sequence, use a linked list data structure.

2) Travel through Fibonacci sequence adding up all even
values. 

3) Return Solution

*/


// Make the LL nodes
struct node
{
	int val;
	struct node *next;

};


struct node* create_list(int);

struct node* add_to_list(int, int); 

void print_list(void);



