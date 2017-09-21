//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include<stdio.h>
int factor_check(int number)
{
	int i,flag=0;
	 for (i=1;i<=20;i++)
	  {
	  	 if (number%i==0)
	  	  flag=1;
	  	 else 
	  	 {
	  	  flag=0;
	  	  break;
	     }
	  }
    if (flag==0)    
     return 0;        // Return 0 if number does not have factor from 0 to 20
    if (flag==1)
     return 1;        // Return 0 if number has factor from 0 to 20
}

void main()
{
	int i=1,k;
	 while (i!=0)      // loop runs until a desired number is found.
	  {
	  	 if (factor_check(i))      
	  	  {
	  	  	k=i;
		    i=0;
	      }
	     else 
		   i++; 
	  }
	printf("\n\n The required number is : %d ",k);
}
