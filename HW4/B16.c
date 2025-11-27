#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	while(b!=0){
		int t = a%b;
		a = b;
		b = t;
		}

	printf("%d", a);
	return 0;
}

