#include <stdio.h>

int main()
{
	int a=0;
    scanf("%d", &a);
    switch(a){
		case 1:
		case 2:
		case 12:
		printf("winter");
		return 0;
		case 3:
		case 4:
		case 5:
		printf("spring");
		return 0;
		case 6:
		case 7:
		case 8:
		printf ("summer");
		return 0;
		case 9:
		case 10:
		case 11:
		printf ("autumn");
		return 0;
	}
		
    return 0;
}
