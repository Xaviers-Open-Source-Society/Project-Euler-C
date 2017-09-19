#include<stdio.h>

int prim(int n)          // Function to find whether a number is prime or not. (Secondary Function)
{
   int i,flag=0;
   for(i=2;i<n/2;i++)
    {
    	if (n%i==0)
    	 flag=1;
   	}
	if (flag==0)
	 return 1;
	if (flag==1)
	 return 0;
} 
void primary_fn()                // Primary Function
{
	long long int bigger_num=0,i;
	 printf("\n\n Prime factors of 600851475143 are : ");
	 for (i=2;i<600851475143/2;i++)                                 // Loop to find factors.
	  {
	   if (600851475143%i==0)                                       // Enter if i is a factor.
	   {
	     if (prim(i))                                              // Enter only if i is prime.
	    {
	       printf("\n\t %d",i);
         if (i>=bigger_num)
           bigger_num=i;
      }
       else
		    break;	  
	   }
	  }
     printf("\n\n The biggest prime factor of 600851475143 is : %lld",bigger_num);
}
void main()
{ 
 primary_fn(); 
}
