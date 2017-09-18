#include<stdio.h>
int main(){
	int fib1 = 1, fib2 = 2, sum = 0, fibn = 0;
	while(fibn <= 4000000){
		fibn = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibn;
		if(fibn % 2 == 0)
			sum = sum + fibn;
	}
	printf("Sum of even-valued terms smaller than four million is %d.\n", sum + 2);
}
