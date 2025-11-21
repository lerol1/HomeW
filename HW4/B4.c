#include <stdio.h>

int main() {
    char a[20];
    int sk = 0;
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++) {
        sk++;
    }
    sk == 3 ? printf("YES") : printf("NO");
    return 0;
}
