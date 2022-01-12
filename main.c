#include <stdio.h>


void pE_problem_1();

void main()
{
 /*Project Euler Problem 3: 
  *
  * Find the largest prime factor of a number, N: 
  *
	1:  create a list of prime numbers starting with just 2.

	2:  check whether N is divisible by each number in the list of primes:
		If it is set N = Nold / prime and do the same again recursively. 
			Check when the new N is, itself, prime:
				
				if prime:
					append to prime array 
			       		return the prime array. note: might be better to just return value  

		If not, test whether prime +1 is prime
			if prime, append to prime list 

			go back to step 2
		       	
		Else, test prime +1+1	

	3:  check for the largest value in the prime array	

  */

	
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

