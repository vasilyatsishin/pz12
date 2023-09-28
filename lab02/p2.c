#include <stdio.h>
#include <math.h>
/*// ������� ��� ���������� ln(x+1) �� ��������� ���� �������
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

int main() {
    double A = -0.999999999;  // ������� ������
    double B = 1.0;  // ʳ���� ������
    int numPoints = 10; // ʳ������ ����� ��� ���������
    int n = 5; // г���� �������� � ��� �������

    printf("x\t\tTaylor\t\tExact\n");

    // ������������ ������� �� ��������� � ������ ���������
    for (int i = 0; i <= numPoints; i++) {
        double x = A + (B - A) * i / numPoints;
        double taylorValue = taylorSeries(x, n);
        double exactValue = log(x + 1); // �������� �������, ��������� ��������

        printf("%f\t%f\t%f\n", x, taylorValue, exactValue);
    }

    return 0;
} */