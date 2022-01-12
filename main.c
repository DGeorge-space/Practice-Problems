#include <stdio.h>


void pE_problem_1();

void main()
{

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
//	printf("count: %d \n", count);


}

pE_problem2()
{
/*By Considering terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even valued terms */

		
	long maxFibonacciNumber = 4000000;
	long sumOfEvenFibNums = 2;

	long fibNum_i = 1;
	long fibNum_j = 2;
	long fibNum_k = 0;
	
	while(1)
	{
		fibNum_k = fibNum_i + fibNum_j;

		if(fibNum_k >maxFibonacciNumber){
			break;
		}

		if(fibNum_k % 2 ==0)
		{
			sumOfEvenFibNums += fibNum_k;
		}

		printf("%d \n", fibNum_k);


		fibNum_i = fibNum_j;
		fibNum_j = fibNum_k;

	}

	printf("Sum of even Fibonacci Numbers up to %ld is: %ld \n", maxFibonacciNumber, sumOfEvenFibNums); 

}

