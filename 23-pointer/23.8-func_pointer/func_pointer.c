#include <stdio.h>

void say_hello(const char* str) {
	printf("Hello %s\n", str);
}

int main(void) {
	void (*f)(const char* str)=say_hello;
	f("Guys");
	return 0;
}

