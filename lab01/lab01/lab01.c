
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	p2();
}

int p2(void) {
	float x;
	float y;
	float z;
	printf("Type your ints:");
	scanf("%f %f %f", &x, &y, &z);
	float disc = pow(y, 2) - (4 * x * z);
	if (disc < 0)
	{
		printf("This equation has no solutions");
	}
	else if (disc == 0) {
		float solution = -y / (2 * x);
		printf("There is one solution: %f", solution);
	}
	else {
		float solution1 = (-y + sqrt(disc)) / (2 * x);
		float solution2 = (-y - sqrt(disc)) / (2 * x);
		printf("There are two solutions: %f, %f", solution1, solution2);
	}
	return 0;
}