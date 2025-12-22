#include <stdio.h>

int sum_digits_even(unsigned int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum % 2 == 0;
}

int main(void) {
    unsigned int n;
    scanf("%u", &n);

    if (sum_digits_even(n))
        printf("YES");
    else
        printf("NO");

    return 0;
}
