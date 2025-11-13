#include <stdio.h>

int main()
{
    int n=0;
    int sum;
    scanf("%d", &n);
    sum = n%10; 
    sum += (n/10)%10; 
    sum += (n/100)%10; 
    printf("%d\n",sum);
    return 0;
}
