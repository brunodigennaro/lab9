#include <stdio.h>
#include <string.h> 
#include <math.h> 

int btod(int size, char inputBin[size]);
int dtob(int inputDec);

int main(){
	//int num;
	char inputBin[30];
	int size = strlen(inputBin); 
	int inputDec; 

	printf("Enter a binary number: "); 
	scanf("%s", inputBin); 

	printf("Decimal conversion is: %d\n", btod(size, inputBin));

	printf("Enter a decimal number: ");
	scanf("%d", &inputDec);

	printf("Binary conversion is: %\n", dtob(inputDec));
	
return 0; 	
}

int btod(int size, char inputBin[size]){ // function to convert binary to decimal
	int sum = 0; int i = 0;
	while (size > 0)
	{
		sum += (size % 10) * pow(2, i);
		size /= 10;
		i++;
	}
	return sum;
}

int dtob(int inputDec){ // converting decimal to binary	 
	int remainder, input, base; 
	int num = inputDec;
	while(num != 0){
		remainder = num % 10; 
		input += remainder * base;
		num /= 10;
		base *= 2; 
	}
	return num; 
}

