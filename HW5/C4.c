#include <stdio.h>

int f(int x) {
    if (x < -2) return 4;
    if (x < 2) return x * x;          
    return x * x + 4 * x + 5;       
}
int main(int argc, char **argv){
    int x;
    int first = 1;
    int maxv = 0;

    while (scanf("%d", &x) == 1 && x != 0) {
        int fx = f(x);
        if (first) {
            maxv = fx;
            first = 0;
        } else if (fx > maxv) {
            maxv = fx;
        }
    }

    printf("%d", maxv);
    return 0;
}
