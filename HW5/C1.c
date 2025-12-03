#include <stdio.h>


int abs(int x) {
    if (x < 0)
        return -x;
    return x;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = abs(n);

    printf("%d", result);

    return 0;
}
