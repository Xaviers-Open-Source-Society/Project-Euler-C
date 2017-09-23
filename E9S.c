/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 a2 + b2 = c2
 
 For example, 32 + 42 = 9 + 16 = 25 = 52.
 
 There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 Find the product abc.
 */
 #include<stdio.h>
  
void main()
 {
 	int x,y,z,flag=0,p,q,r;
 	
 	 	for (x=1;x<1000;x++)
 	 	 for (y=1;y<1000;y++)
 	 	  for (z=1;z<1000;z++) 
 	 	 {
 	 	   if (x*x+y*y==z*z || x*x+z*z==y*y || z*z+y*y==x*x)
 	 	    if ((x+y+z)==1000)
 	 	    {
			 flag=1;
		     p=x;q=y;r=z;
			} 
 	 	    
		 }
        	  
	   if (flag==1) 
	    printf("\n\n The pythogorean triplets are : %d %d and %d ",p,q,r); 
	    printf("\n\n The product of triplets are : %d ",p*q*r);
 }
 
 
 
