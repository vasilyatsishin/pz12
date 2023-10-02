#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

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

double taylor_series_ln(double x, int n) {
    double result = 0;
    int sign = 1;

    for (int i = 1; i <= n; i++) {
        result += sign * pow(x, i) / i;
        sign = -sign;
    }

    return result;
}

int counts() {
    double A = -1.0, B = 1.0, step;
    int n;


    printf("Step: ");
    scanf("%lf", &step);

    printf("Count of n: ");
    scanf("%d", &n);

    printf("\n x\t\tResult yt\t\tResult y\tDelta\t\t\tIterations\n");
    int iterations = 0;
    for (double x = A; x <= B; x += step) {
        double taylor_result = taylor_series_ln(x, n);
        double formula_result = log(1 + x);
        double delta = fabs(taylor_result - formula_result);
        iterations++;
        printf("%.4lf\t\t%.6lf\t\t%.6lf\t%.6lf\t\t\t%d\n", x, taylor_result, formula_result, delta, iterations);
    }

    return 0;
}