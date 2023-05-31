#include <stdio.h>
#include <math.h>
void main(){
	int input, temp, rem;
	int sum = 0;
	int n = 0;
	printf("Enter the number to check if Armstrong or not: ");
	scanf("%d", &input);
	temp = input;
	// Count the number of digits in the input
	while (temp != 0)
	{
		temp = temp / 10;
		n++;
	}
	temp = input;
	// Calculate the sum of the cubes of each digit
	while (temp != 0)
	{
		rem = temp % 10;
		sum += pow(rem, n);
		temp /= 10;
	}
	// Check if the input is Armstrong or not
	if (sum == input)
	{
		printf("%d is an Armstrong number.\n", input);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", input);
	}
}

