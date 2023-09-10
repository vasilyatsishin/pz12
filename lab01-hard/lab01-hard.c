#include <math.h>
#include <stdio.h>

double k = 13.0;

double f1(double x, double y) {
	double z = 1.3 * k + 1.5;
	printf("x: %f y: %f z: %f \n", x, y, z);
	double res = pow(cos(atan((pow(x, 3.0) + y) / pow(fabs(z), 0.56))), 2.0) + exp(((3 * z - y) / (1.2 * z)) * -1.0);
	printf("f1 res: %f \n", res);
	return res;
}

double f2(double x, double y, double f1) {
	double z = 1.3 * k + 1.5;
	double res = (z + pow(pow(sin(pow(fabs(x + y), 0.3)), 2), 1.0 / 3.0)) / (0.3 + pow(f1, 2) + sin(pow(fabs(z), 1.3))) + tan((3 * x) / z);
	printf("f2 res: %f", res);
	return res;
}

int main(void) {
	double x = -1.83 * k + 0.5;
	double y = -0.74 * k + 1.0;
	double f1Result = f1(x, y);
	double f2Result = f2(x, y, f1Result);
	return 0;
}
