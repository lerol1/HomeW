#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	
	scanf("%d", &a);

	int i=1;
	while(i <=a){
	printf("%d %d %d\n", i, i*i, i*i*i);
	i++;
	}

	return 0;
}

