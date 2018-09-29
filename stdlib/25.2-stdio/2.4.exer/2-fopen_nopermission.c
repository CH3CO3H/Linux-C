#include <stdio.h>

int main(void) {
	FILE* fp=fopen("/etc/shadow", "r");
	if (fp == NULL) {
		perror("Open /etc/shadow");
		return 1;
	}
	return 0;
}

