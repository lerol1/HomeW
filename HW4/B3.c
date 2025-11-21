#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0;
	int b=0;
	int sq = 0;
	
	scanf("%d%d", &a, &b);
	for(int i=a; i<=b; ++i){
		sq += i*i;
		}
	printf("%d", sq);
	return 0;
}

