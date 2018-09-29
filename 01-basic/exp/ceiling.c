#include <stdio.h>

int main(int argc, char const *argv[]) {
	int x;
	int n;
	scanf("%d%d", &x, &n);
	if(n==0)
		return 1;
	else if(x%n==0)
		printf("%d\n", x/n);
	else
		printf("%d\n", x/n+1);
	return 0;
}