#include<stdio.h>
//function declaration.
int check_palindrome(int );
int reverse(int );
int main(){
	int i, j, number, reversed_number, largest = 0;
	for(i = 100; i <= 999; i++){
		for(j = 100; j <= 999; j++){
			number = i*j;
			reversed_number = reverse(number);
			if(reversed_number == number && number >= largest){
				largest = number;
			}
			else{
				continue;
			}
		}
	}
	printf("%d\n\n", reversed_number);
	printf("Largest Palindrome is %d.\n", largest);
}
int reverse(int number2){
	int temp = number2, reversed_number = 0, remainder = 0;
	while(temp != 0){
		remainder = (temp % 10);
		temp = (temp - remainder) / 10;
		reversed_number = reversed_number * 10 + remainder;
	}
	return(reversed_number);
}
