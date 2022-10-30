#include <stdio.h>
#include <string.h> 

int btod(int size, char inputBin[size]);
int dtob(int inputDec);

int main(){
	int input;
	int inputBin[30];
	int size = 30; 
	//= strlen(inputBin); 
	int decNum; 

	printf("Enter a binary number: "); 
	scanf("%d", inputBin); 

	//btod(binNum, length);
	int value = btod(size, inputBin);
	printf("\nThe binary conversion of your decimal number is: %d\n", value);

	printf("Enter a decimal number: ");
	scanf("%d", &decNum);

	dtob(decNum); 
	char value2[dtob(input)]; 
	printf("\nThe binary conversion of your decimal number is: %s\n", value2);
	
return 0; 	
}

int dtob(int inputDec){ // converting decimal to biary	 
	int remainder, decNum, base; 
	int num = decNum;
	while(num != 0){
		remainder = num % 10; 
		decNum += remainder * base;
		num /= 10;
		base *= 2; 
	}
	return decNum; 
}

int btod(int size, char inputBin[size]){ // function to convert binary to decimal
int length = strlen(inputBin);
int total = 0; 
int decVal = 1; 
	for(int i = (length - 1); i >= 0; i--){
		if (inputBin[i] == 1) 
			total += decVal; 
			decVal *= 2; 	
	}
	return total; 
}
// another form of btod math 
// printf("%lld in binary = %d in decimal", n, convert(n));
/*int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
