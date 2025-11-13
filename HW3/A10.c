#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int max =0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e); 
	max = a < b ? a : b; // сравнение a и b
	max = max < c ? max : c; //сравнение ab и c
	max = max < d ? max : d; //т.д. копипастом 
	max = max < e ? max : e;
	printf("%d\n", max);

	return 0;
}
