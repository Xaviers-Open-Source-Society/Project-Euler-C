/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 Find the sum of all the primes below two million.
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
    long long int sum=0, i;
	for (i=2;i<2000000;i++)
	{
	    if (prime_check(i))
			sum = sum + i;	
	}
    printf("Required sum : %lld.\n",sum);
}
