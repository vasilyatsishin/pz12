#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    p2();
}

int p1() {
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

int p2(){
    counts();
}

double taylorSeries(double x, int n) {
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            result -= pow(x, i) / i;
        }
        else {
            result += pow(x, i) / i;
        }
    }
    return result;
}

int counts() {
    double A = -0.999999999;  // Початок відрізку
    double B = 1.0;  // Кінець відрізку
    int numPoints = 10; // Кількість точок для табуляції
    int n = 5; // Рівень розкладу у ряд Тейлора

    printf("x\t\tTaylor\t\tExact\n");

    // Протабулюємо функцію та порівняємо з точним значенням
    for (int i = 0; i <= numPoints; i++) {
        double x = A + (B - A) * i / numPoints;
        double taylorValue = taylorSeries(x, n);
        double exactValue = log(x + 1); // Значення функції, обчислене формулою

        printf("%f\t%f\t%f\n", x, taylorValue, exactValue);
    }

    return 0;
}