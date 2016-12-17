#include<stdio.h>

int euclid(int,int);

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a = euclid(a, b);
	printf("GCD:%d\n", a);
	return 0;
}

int euclid(int a, int b)
{
	if (b>a) {
		b=a^b,a=a^b,b=a^b;
	}
	if (a%b==0) {
		return b;
	} else
		euclid(b, a%b);
}
