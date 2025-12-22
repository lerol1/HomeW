#include <stdio.h>

float sinus(float x) {
    float pi = 3.14159265358979323846f;

    
    float rad = x * pi / 180.0f;

    float term = rad;  
    float sum = term;
    int n = 1;

    while (term > 0.001f || term < -0.001f) {
        term *= -rad * rad / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return sum;
}

int main(void) {
    float x;
    scanf("%f", &x);

    printf("%.3f", sinus(x));
    return 0;
}
