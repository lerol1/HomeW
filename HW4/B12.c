#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	scanf("%d", &a);
	
	int min = 9;
	int max = 0;
	
	while(a > 0){
		int t = a % 10;
		if(t < min) min = t;
		if(t > max) max = t;
		
		a /= 10;
		}
	printf("%d %d", min, max);

	return 0;
}

