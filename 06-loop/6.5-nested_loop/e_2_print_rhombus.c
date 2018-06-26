#include <stdio.h>

void diamond(int, char);
void prtspc(int, char);

int main(int argc, char const *argv[])
{
	int a;
	char b;
	scanf("%d%c", &a, &b);
	diamond(a, b);
	return 0;
}

void diamond(int a, char b)
{
	if(a<0||a%2==0)
		printf("wrong input\n");
	else if(a==1)
		printf("%c\n", b);
	else {
		prtspc(a, b);
	}
}

void prtspc(int a, char b)
{
	int i,j;
	for(i=0;i<a/2;i++){
		for(j=0;j<a/2-i;j++)
			printf(" \t");
		for(j=0;j<2*i+1;j++)
			printf("%c\t", b);
		printf("\n");
	}
	for(i=0;i<a;i++)
		printf("%c\t", b);
	printf("\n");
	for(i=0;i<a/2;i++){
		for(j=0;j<=i;j++)
			printf(" \t");
		for(j=0;j<a-2*i-2;j++)
			printf("%c\t", b);
		printf("\n");
	}
}