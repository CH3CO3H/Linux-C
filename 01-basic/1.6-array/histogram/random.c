#include <stdio.h>
#include <stdlib.h>
#define N 20
#define false 0
#define true 1

int a[N];

void gen_random(int upper_bound)
{
	for (size_t i=0;i<N;i++)
		a[i]=rand()%upper_bound;
}

int main(void)
{
	unsigned histogram[10]={0};
	gen_random(10);
	for (size_t i=0;i<N;i++) {
		histogram[a[i]]++;
	}
	for (size_t i=0;i<10;i++)
		printf("%lu", i);
	putchar('\n');
	for (_Bool az=false;az==false;) {
		unsigned sum=0;
		for (size_t i=0;i<10;i++) {
			if (histogram[i]==0)
				putchar(' ');
			else {
				putchar('*');
				sum+=(--histogram[i]);
			}
		}
		putchar('\n');
		if (sum==0)
			az=true;
	}
	return 0;
}

