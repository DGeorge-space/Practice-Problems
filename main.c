#include <stdio.h>
#include "pE_problem2.c"

void pE_problem_1();

void main()
{
	struct node *ptr=NULL;

	for(int i=0; i=10; i++)
	{
		add_to_list(i,TRUE);
	}


	print_list();

}	
pE_problem_1()
{

/* Project Euler Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

	int count = 0; 

	for(int i =0; i<1000; i++)
	{
		if(i %3 ==0 || i % 5 ==0)
		{
			count +=i;
		}
	}
	printf("count: %d \n", count);


}

