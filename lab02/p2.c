#include <stdio.h>
#include <math.h>
/*// Функція для обчислення ln(x+1) за допомогою ряду Тейлора
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
} */