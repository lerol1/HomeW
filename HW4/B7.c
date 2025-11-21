#include <stdio.h>

int main() {
    char a[50];
    scanf("%s", a);
    //int n = 0;
    
    for(int i=0; a[i] !='\0'; i++){
		for (int j = i + 1; a[j] != '\0'; j++) {
			if(a[i] == a[j]){
				printf("YES");
				return 0;
			}
		}
	} 
	
   printf("NO");
    return 0;
}
