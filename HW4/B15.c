#include <stdio.h>

int main(int argc, char **argv)
{
	int a =1;
	int sc = 0;
	while(1){
		scanf("%d", &a);
		if(a == 0){
			break;
			}
		if(a % 2 ==0) ++sc;
			
		}

	printf("%d", sc);
	return 0;
}

