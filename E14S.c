#include<stdio.h>
int main(){
	long long int number, chain_length_counter = 0, number_in_loop, largest = 0, i, largest_chain_producer;
	number = 0;
	i = 1;
	while(i < 1000000){
		chain_length_counter = 0;
		number_in_loop = i;
	while(number_in_loop != 1){
		if(number_in_loop % 2 == 0){
			number_in_loop = number_in_loop / 2;
		}
		else{
			number_in_loop = (3 * number_in_loop) + 1;
		}
		if(largest < chain_length_counter){
			largest = chain_length_counter;
			largest_chain_producer = i;
			}
		chain_length_counter++;
		}
		//printf("\n\n");
		i++;
	}
	printf("Largest chain length producing number is %lld.\n", largest_chain_producer);
}
