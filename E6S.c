#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int i, sum_of_squares = 0, square_of_sum = 0, sum_of_n = 0;
	for(i = 1; i <= 100; i++){
		sum_of_squares = sum_of_squares + i*i;
	}
	for(i = 1; i <= 100; i++){
		sum_of_n = sum_of_n + i;
	}
	square_of_sum = pow(sum_of_n, 2);
	printf("Difference is %d.\n", abs(sum_of_squares - square_of_sum));
}
