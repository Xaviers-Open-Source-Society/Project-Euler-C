#include<stdio.h>
long long int triangle_number(long long int );
long long int no_of_divisor_fn(long long int );
int main(){
	long long int i = 1, number_of_divisors = 0, t_number;
	while(number_of_divisors < 500){
		t_number = triangle_number(i);
		number_of_divisors = no_of_divisor_fn(t_number);
		i++;
	}
	printf("The desired trianlge number is %lld.\n", t_number);
}
long long int triangle_number(long long int number){
	return((number*(number+1)) / 2);
}
long long int no_of_divisor_fn(long long int number){
	long long int counter = 0, i = 1;
	while(i <= number){
		if(number % i == 0){
			counter++;
			i++;
		}
		else
			i++;
	}
	return(counter);
}
