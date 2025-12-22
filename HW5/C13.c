#include <stdio.h>

float cosinus(float x) {
    float pi = 3.14159265358979323846f;

    float rad = x * pi / 180.0f;

    float term = 1.0f;   
    float sum = term;
    int n = 1;

    while (term > 0.001f || term < -0.001f) {
        term *= -rad * rad / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }

    return sum;
}

int main(void) {
    int x;
    scanf("%d", &x);

    printf("%.3f", cosinus((float)x));
    return 0;
}
