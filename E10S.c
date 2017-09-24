/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 Find the sum of all the primes below two million.
 */
#include<stdio.h>
#include<math.h>
 int prime_check(long  number)
{
	int i;
	 for (i=2;i<=sqrt(number);i++)
       {
       	 if (number%i==0)
       	  {
			 return 0;;
		  }
	   }
	   
	 return 1;
}
void main()
{
     long  sum=0;
     int i;
	 for (i=2;i<2000000;i++)
	 {
	    if (prime_check(i))
		 sum = sum + i;	
	 }
     printf("\n\n Required sum : %ld",sum);
}
