#include <stdio.h>

int main() {
    char a[50];
    scanf("%s", a);
    //int n = 0;
    int sc=0;
    for(int i=0; a[i] !='\0'; i++){
		if(a[i]=='9'){
			++sc;
			}
	} 
	sc == 1 ? printf("YES") : printf("NO");
   
    return 0;
}
