/*  Bruno DiGennaro 
	CPSC 1110 001; Fall 2022
	October 30, 2022
	Binary to decimal and decimal to binary conversion using two functions
*/

#include <stdio.h>
#include <string.h> 
#include <math.h> 

int btod(int size, char inputBin[size]);
int dtob(int inputDec);

int main(){

	//int input;
	char inputBin[30];
	int inputDec; 
	

	printf("Enter a binary number: "); 
	scanf("%s", inputBin); 
	// sets size to the length of string inputBin
	int size = strlen(inputBin); 

	printf("Decimal conversion is: %i\n", btod(size, inputBin));
	
	printf("Enter a decimal number: ");
	scanf("%d", &inputDec);

	printf("Binary conversion is: %d\n", dtob(inputDec));
return 0; 	
}

// convert binary to decimal
int btod(int size, char inputBin[size]){ 
	int decimal = 0, remainder, base = 0;
	for(int i = size - 1; i >= 0; i--) {
		if(inputBin[i] == '1'){
			remainder = (inputBin[i] - '0') % 10;
			decimal += remainder * pow(2, base);
		}
			base++;
	}
	return decimal; 
}

// converting decimal to binary
int dtob(int inputDec){ 	 
	int array[30], remainder = 0, i = 1, bin = 0; 
	int num = inputDec;
	 while(num != 0){
		 remainder = num % 2;
		 num = num / 2;
		 bin += remainder * i; 
		 i *= 10; 
	}
	return bin; 
}





