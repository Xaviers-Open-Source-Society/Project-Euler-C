#include<stdio.h>
int count_letters(int );
int main(){
	int no_of_letters = 0, i;
	for(i = 1; i <=1000; i++){
		no_of_letters = no_of_letters + count_letters(i);
	}
	printf("%d.\n", no_of_letters);
}

int count_letters(int number2){
	int new_number_letters = 0, remainder = 0;
	if(number2 == 1000){
		new_number_letters = 11;
		return(new_number_letters);
	}
	else if(number2 >= 100 && number2 < 1000){
		if((number2 % 100) == 24 || (number2 % 100) == 25 || (number2 % 100) == 28 || (number2 % 100) == 29 || (number2 % 100) == 34 || (number2 % 100) == 35 || (number2 % 100) == 38 || (number2 % 100) == 39 || (number2 % 100) == 44 || (number2 % 100) == 45 || (number2 % 100) == 48 || (number2 % 100) == 49 || (number2 % 100) == 53 || (number2 % 100) == 57 || (number2 % 100) == 63 || (number2 % 100) == 67 || (number2 % 100) == 71 || (number2 % 100) == 72 || (number2 % 100) == 76 || (number2 % 100) == 84 || (number2 % 100) == 85 || (number2 % 100) == 88 || (number2 % 100) == 89 || (number2 % 100) == 94 || (number2 % 100) == 95 || (number2 % 100) == 98 || (number2 % 100) == 99){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 23;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 ==  3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 25;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 24;
			}
		}//for length 15
		else if((number2 % 100) == 21 || (number2 % 100) == 22 || (number2 % 100) == 26 || (number2 % 100) == 31 || (number2 % 100) == 32 || (number2 % 100) == 36 || (number2 % 100) == 41 || (number2 % 100) == 42 || (number2 % 100) == 46 || (number2 % 100) == 45 || (number2 % 100) == 54 || (number2 % 100) == 55 || (number2 % 100) == 58 || (number2 % 100) == 59 || (number2 % 100) == 64 || (number2 % 100) == 65 || (number2 % 100) == 68 || (number2 % 100) == 69 || (number2 % 100) == 81 || (number2 % 100) == 82 || (number2 % 100) == 86 || (number2 % 100) == 91 || (number2 % 100) == 92 || (number2 % 100) == 96){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 22;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 24;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 23;
			}
		}//for length 17
		else if((number2 % 100) == 23 || (number2 % 100) == 33 || (number2 % 100) == 43 || (number2 % 100) == 27 || (number2 % 100) == 37 || (number2 % 100) == 47 || (number2 % 100) == 74 || (number2 % 100) == 75 || (number2 % 100) == 78 || (number2 % 100) == 79 || (number2 % 100) == 83 || (number2 % 100) == 93 || (number2 % 100) == 87 || (number2 % 100) == 97){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 24;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 26;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 25;
			}
		}//for length 14
		else if((number2 % 100) == 51 || (number2 % 100) == 52 || (number2 % 100) == 56 || (number2 % 100) == 61 || (number2 % 100) == 62 || (number2 % 100) == 66){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 21;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 23;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 22;
			}
		}//for length 18
		else if((number2 % 100) == 73 || (number2 % 100) == 77){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 25;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 27;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 26;
			}
		}
		else if((number2 % 100) == 0){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 10;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 12;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 11;
			}
		}
		else if((number2 % 100) == 1 || (number2 % 100) == 2 || (number2 % 100) == 6 || (number2 % 100) == 10){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 16;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 18;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 17;
			}
		}
		else if((number2 % 100) == 4 || (number2 % 100) == 5 || (number2 % 100) == 8 || (number2 % 100) == 9){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 17;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 19;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 18;
			}
		}
		else if((number2 % 100) == 3 || (number2 % 100) == 7 || (number2 % 100) == 50 || (number2 % 100) == 60){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 18;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 20;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 19;
			}
		}
		else if((number2 % 100) == 11 || (number2 % 100) == 12 || (number2 % 100) == 20 || (number2 % 100) == 30 || (number2 % 100) == 40 || (number2 % 100) == 80 || (number2 % 100) == 90){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 19;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 21;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 20;
			}
		}
		else if((number2 % 100) == 13 || (number2 % 100) == 14 || (number2 % 100) == 18 || (number2 % 100) == 19){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 21;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 ==  3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 23;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 22;
			}
		}
		else if((number2 % 100) == 15 || (number2 % 100) == 16 || (number2 % 100) == 70){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 20;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 22;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 21;
			}
		}
		else if((number2 % 100) == 17){
			if(((number2 - (number2 % 100)) / 100 ) % 10 == 1 || ((number2 - (number2 % 100)) / 100 ) % 10 == 2 || ((number2 - (number2 % 100)) / 100 ) % 10 == 6){
				new_number_letters = 22;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 ==  3 || ((number2 - (number2 % 100)) / 100 ) % 10 == 7 || ((number2 - (number2 % 100)) / 100 ) % 10 == 8){
				new_number_letters = 23;
			}
			else if(((number2 - (number2 % 100)) / 100 ) % 10 == 4 || ((number2 - (number2 % 100)) / 100 ) % 10 == 5 || ((number2 - (number2 % 100)) / 100 ) % 10 == 9){
				new_number_letters = 22;
			}
		}
		return(new_number_letters);
	}
	else if(number2 >=1 && number2 < 10){
		if(number2 == 1 || number2 == 2 || number2 == 6){
			new_number_letters = 3;
		}
		if(number2 == 3 || number2 == 7 || number2 == 8){
			new_number_letters = 5;
		}
		if(number2 == 4 || number2 == 5 || number2 == 9){
			new_number_letters = 4;
		}
		return(new_number_letters);
	}
	else if(number2 >= 10 && number2 < 100){
		if(number2 == 10){
			new_number_letters = 3;
		}
		else if(number2 == 11 || number2 == 12 || number2 == 20 || number2 == 30|| number2 == 40 || number2 == 80 || number2 == 90){
			new_number_letters = 6;
		}
		else if(number2 == 21 || number2 == 22 || number2 == 26 || number2 == 31 || number2 == 32 || number2 == 36 || number2 == 41 || number2 == 42 || number2 == 46 || number2 == 22 || number2 ==  81 || number2 == 82 || number2 == 86 || number2 == 91 || number2 == 92 || number2 == 96 || number2 == 54 || number2 == 55 || number2 == 59 || number2 == 64 || number2 == 65 || number2 == 69){
			new_number_letters = 9;
		}
		else if(number2 == 50 || number2 == 60){
			new_number_letters = 5;
		}
		else if(number2 == 24 || number2 == 25 || number2 == 29 || number2 == 34 || number2 == 35 || number2 == 39 || number2 == 44 || number2 == 45 || number2 == 49 || number2 == 53 || number2 == 57 || number2 == 58 || number2 == 63 || number2 == 67 || number2 == 68 || number2 == 71 || number2 == 72 || number2 == 76 || number2 == 84 || number2 == 85 || number2 == 89 || number2 == 94 || number2 == 95 || number2 == 99){
			new_number_letters = 10;
		}
		else if(number2 == 13 || number2 == 14 || number2 == 18 || number2 == 19){
			new_number_letters = 8;
		}
		else if(number2 == 15 || number2 == 16 || number2 == 70){
			new_number_letters = 7;
		}
		else if(number2 == 23 || number2 == 33 || number2 == 43 || number2 == 27 || number2 == 28 || number2 == 37 || number2 == 38 || number2 == 47 || number2 == 48 || number2 == 83 || number2 == 93 || number2 == 74 || number2 == 75 || number2 == 79 || number2 == 87 || number2 == 88 || number2 == 97 || number2 == 98){
			new_number_letters = 11;	
		}
		else if(number2 == 17 || number2 == 51 || number2 == 52 || number2 == 61 || number2 == 62 || number2 == 56 || number2 == 66){
			new_number_letters = 9;
		}
		else if(number2 == 73 || number2 == 77 || number2 == 78){
			new_number_letters = 12;
		}
		return(new_number_letters);
	}
}
