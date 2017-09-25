/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
#include<stdio.h>
#include<math.h>
long long int prime_check(long long int );
long long int prime_check(long long int number)
{
	long long int i;
	int sqrt_number = sqrt(number);
	for (i = 2; i <= sqrt_number; i++)
       {
       	if (number % i == 0)
       		{
			 return 0;;
		    }
	   }
	return 1;
}
int main()
{
    long long int sum=0, i = 2, counter = 0, prime_10001;
	while(counter != 10001)
	{
	    if (prime_check(i)){
			prime_10001 = i;
			counter = counter + 1;
			i++;
		}
		else
			i++;
	}
    printf("Required Prime is : %lld.\n",prime_10001);
}
