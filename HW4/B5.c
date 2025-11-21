#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum(n / 10);
}

int main() {
    char a[20];
    scanf("%s", a);
    int n = 0;
    
    for(int i=0; a[i] !='\0'; i++){
		n=n*10 +(a[i] - '0');
		}
    printf("%d", sum(n));
    return 0;
}
