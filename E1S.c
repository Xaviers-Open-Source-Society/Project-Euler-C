#include<stdio.h>
int sum_multiples(int );
int main(){
	int number = 1000;
	printf("Sum is %d.\n", sum_multiples(number));
}
int sum_multiples(int number2){
	int i, sum = 0;
	for(i = 0; i < number2; i++){
		if(i % 3 == 0 || i % 5 == 0){
			sum = sum + i;
		}
		else
			continue;
	}
	return(sum);
}

