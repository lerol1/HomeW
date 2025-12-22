#include <stdio.h>

int grow_up(int n) {
    int prev = 10;  

    while (n > 0) {
        int cur = n % 10;
        if (cur >= prev) {
            return 0;  
        }
        prev = cur;
        n /= 10;
    }

    return 1;  
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (grow_up(n))
        printf("YES");
    else
        printf("NO");

    return 0;
}
