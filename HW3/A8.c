#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max =0;
	scanf("%d%d%d", &a, &b, &c);
	max = a > b ? a : b; // сравнение a и b
	max = max > c ? max : c; //сравнение ab и c
	printf("%d\n", max);

	return 0;
}
