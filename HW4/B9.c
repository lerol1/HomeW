#include <stdio.h>

int main() {
    int a=0;
    scanf("%d", &a);
    
    while(a > 0){
    int n = a % 10;
    if(n % 2 !=0){
		printf("NO");
		return 0;
		}
		a /= 10;
    }
	printf("YES");
    return 0;
}
