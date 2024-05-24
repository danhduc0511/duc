#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char a[2],b[2];
	gets(a);
	gets(b);
	char c;
	for(c=toupper(a[0]);c<=toupper(b[0]);c++)
	    printf("%c ",c);
	return 0;
	
}
