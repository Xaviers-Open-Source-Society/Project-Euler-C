/*Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
 How many such routes are there through a 20×20 grid?
 */
 #include<stdio.h>
 void main()
 {
 	int i,s=20;
 	long long int sum = 0;
 	for (i=s;i>=0;i--)
 	 {
 	 	sum = sum + (4 * (s - i ));   
	  }
    printf("\n\n Required number of paths : %lld",sum);
 }
