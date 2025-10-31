#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d %d", &a,&b,&c);
	double asr= (a+b+c)/3.0;
	printf("%.2f\n", asr);
	return 0;
}

