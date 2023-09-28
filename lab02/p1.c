#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	int first, second;
	printf("Type your number: ");
	scanf("%d", &number);
	first = number / 10;
	second = number % 10;
	int doubleRes = 2 * first * second;
	if (doubleRes == number)
	{
		printf("Your number %d is correct", number);
	}
	else if (number < 10 || number > 99) {
		printf("Your number has to be between 10 & 100");
	}
	else
	{
		printf("Please, try another number");
	}
	return 0;
}