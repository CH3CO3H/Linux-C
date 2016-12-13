#include <stdio.h>

int isly(int);

int main(int argc, char const *argv[])
{
	int y;
	scanf("%d", &y);
	if(isly(y))
		printf("no\n");
	else
		printf("yes\n");
	return 0;
}

int isly(int y)
{
	if(y%400==0||y%4==0&&y%100!=0)
		return 0;
	else
		return 1;
}