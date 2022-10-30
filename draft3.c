/* Bruno DiGennaro 
	CPSC 1110 001
	Binary to Decimal and vice versa conversion
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
	int i = 0;
	int bin;

	printf("Enter a binary number: "); 
	scanf("%s", inputBin); 
	int size = strlen(inputBin); 

	printf("Decimal conversion is: %d\n", btod(size, inputBin));
	
	printf("Enter a decimal number: ");
	scanf("%d", &inputDec);

	printf("Binary conversion is: %d\n", dtob(inputDec));
return 0; 	
}

int btod(int size, char inputBin[size]){ //convert binary to decimal
	int decimal = 0, remainder, base = 0;
	for(int i = size; i >= 0; i--) {
		if(inputBin[i] == '1'){
			remainder = inputBin[i] % 10;
			decimal += remainder * pow(2, base);
		}
			base *= 2;
	}
	return decimal; 
}

int dtob(int inputDec){ //converting decimal to binary	 
	int array[30];  
	int remainder = 0;  
	int i = 1; 
	int bin = 0; 
	int num = inputDec;
	 while(num != 0){
		 remainder = num % 2;
		 num = num / 2;
		 bin += remainder * i; 
		 i *= 10; 
	}
	return bin; 
}





