#include <stdio.h>

int main()
{
    char s[5];
    scanf("%s", s);

    char max = '0';

    for (int i = 0; i < 3; ++i) {
        if (s[i] > max) {
            max = s[i];
        }
    }

    printf("%c\n", max);
    return 0;
}
