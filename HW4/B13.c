#include <stdio.h>

int main(int argc, char **argv)
{
	int a =0;
	scanf("%d", &a);
	int sc1 = 0;
	int sc2 = 0;
	while(a >0){
		int t = a % 10;
		if(t % 2 == 1) 
		++sc2;
		else 
		++sc1;
		a /= 10;
		}
	printf("%d %d", sc1, sc2);
	return 0;
}

