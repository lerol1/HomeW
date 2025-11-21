#include <stdio.h>

int main() {
    char a[20];
    scanf("%s", a);
    //int n = 0;
    
    for(int i=0; a[i] !='\0'; i++){
		if(a[i] == a[i+1]){
			printf("YES");
			return 0;
			}
		
		} 
	
   printf("NO");
    return 0;
}
