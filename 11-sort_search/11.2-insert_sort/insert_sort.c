#include <stdio.h>

#define LEN 5
int a[LEN]={10, 5, 2, 4, 7};

void insert_sort(void)
{
	for (size_t j=1;j<LEN;j++) {
		int k=a[j];
		int i=j-1;
		while (i>=0 && a[i]>k) {
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=k;
	}
}

int main(void)
{
	insert_sort();
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	return 0;
}

