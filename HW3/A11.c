#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int max =0;
	int min = 0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e); 
	max = a > b ? a : b; // сравнение a и b
	min = a < b ? a : b;
	max = max > c ? max : c; //сравнение ab и c
	min = min < c ? min : c;
	max = max > d ? max : d; //т.д. копипастом 
	min = min < d ? min : d;
	max = max > e ? max : e;
	min = min < e ? min : e;
	int sum = 0;
	sum = min + max;
	printf("%d\n", sum);

	return 0;
}
