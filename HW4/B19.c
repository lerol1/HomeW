#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sc=0;
	while(n>0){
		sc +=n%10;
		n/=10;
		}
		if(sc == 10){
			printf("YES");
			} else {
				printf("NO");
				}
    return 0;
}
