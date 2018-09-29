#include <stdio.h>
#include <errno.h>

void sayGoodBye(void) {
	if (errno) perror("terminating with error condition");
	fputs("Good Bye\n", stderr);
}

int main(int argc, const char* argv[argc+1]) {
	atexit(sayGoodBye);
	return 0;
}

