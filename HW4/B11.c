#include <stdio.h>

void rec(char *s){

	if(*s == '\0') return;
	rec(s + 1);
	printf("%c", *s);
	}

int main(int argc, char **argv)
{
	char c[50];
	scanf("%s", c);
	
	rec(c);
	
	return 0;
}

