#include <stdio.h>

int main(void) {
	FILE* fp = fopen("/home/calculus/", "r+");
	if (!fp) {
		perror("Open /home/calculus");
		return 1;
	}
	return 0;
}

