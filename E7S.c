#include<stdio.h>
int main(){
	long long int prime_array[10001];
	prime_array[0] = 2;
	prime_array[1] = 3;
	prime_array[2] = 5;
	prime_array[3] = 7;
	prime_array[4] = 11;
	prime_array[5] = 13;
	//counter_external count the prime_array index.
	/*counter_internal verifies that given number i is prime or not. if counter_internal is equal to counter_external then it is prime,
  since not divisible by all prime numbers till i.*/
	long long int counter_external = 6, i = 14, j, counter_internal = 0;
	while(counter_external != 10001){
		while(counter_internal != counter_external){
			j = 0;
			while(j < counter_external){
				if(i % prime_array[j] == 0){
					i++;
					printf("%lld\n", i);
					counter_internal = 0;
					j = 0; 
				}
				else{
					counter_internal++;
					j++;
				}
			}
		}
		if(counter_internal == counter_external){
			counter_external++;
			prime_array[counter_external] = i;
		}
	}
	printf("10001th Prime is %lld.\n", prime_array[10001]);
}

