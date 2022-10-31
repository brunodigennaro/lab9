#include <stdio.h>

// function prototypes
int dtob(int inputDec);
int btod(int inputBin);

int main() {
	// for storing user inputs
	int binary, decimal;

	// to store converted value
	int converted_binary, converted_decimal;

	// prompts user to input a binary number
	printf("Enter a binary number: ");
	scanf("%d", &binary);
	// converts the binary number to decimal
	// and store it in converted_decimal
	converted_decimal = btod(binary);
	// print the converted value
	printf("decimal conversion: %d\n", converted_decimal);

	// prompts user to input a decimal value
	printf("Enter a decimal number: ");
	scanf("%d", &decimal);
	// converts the decimal number into binary
	// and store it in converted_binary
	converted_binary = dtob(decimal);
	// print the converted value
	printf("binary conversion: %d", converted_binary);

	return 0;
}


// function definitions
int dtob(int inputDec) {
	int multiplier = 1, ans = 0;

	// while the value is still greater than 0
	while (inputDec) {
		ans += ((inputDec % 2) * multiplier);

		// as you move left to right in a decimal number
		// power of 10 increases by 1
		multiplier *= 10;
		inputDec /= 2;
	}
	return ans;
}

int btod(int inputBin) {
	int ans = 0, multiplier = 1;

	// while the value is still greater than 0
	while (inputBin) {
		ans += ((inputBin % 10) * multiplier);

		// as you move left to right in a binary number
		// power of 2 increases by 1
		multiplier *= 2;
		inputBin /= 10;
	}
	return ans;
}