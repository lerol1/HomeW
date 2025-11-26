#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 10) {       
        printf("YES");
        return 0;
    }

    int l = n % 10;
    n /= 10;

    while (n > 0) {
        int curr = n % 10;  

        if (curr >= l) {
            printf("NO");
            return 0;
        }

        l = curr;     
        n /= 10;
    }

    printf("YES");
    return 0;
}
