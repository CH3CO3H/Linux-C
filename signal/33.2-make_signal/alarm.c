#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int counter;
	alarm(1);
	for (counter=0;;counter++)
		printf("counter=%d\n", counter);
	return 0;
}

