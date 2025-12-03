#include <stdio.h>

int power(int n,int p){
	int r=1;
	for(int i=0; i<p; ++i){
		r*=n;
		}
		return r;
	}

int main(int argc, char **argv)
{
	int n=0;
	int p=0;
	scanf("%d%d",&n,&p);
	
	printf("%d", power(n, p));
	return 0;
}

