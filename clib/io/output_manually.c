#include <stdio.h>

static int puts_manually(const char s[static 1]);
static int putchar_manually(int c);

int main(void) {
	puts_manually("Hello, world.\n");
	return 0;
}

int puts_manually(const char s[static 1]) {
	for (size_t i=0;s[i];++i) {
		if (putchar(s[i])==EOF) return EOF;
	}
	if (putchar('\n')==EOF) return EOF;
	return 0;
}

int putchar_manually(int c) {
	return fputc(c, stdout);
}

int puts_manually(const char s[static 1]) {
	if (fputs(s, stdout)==EOF) return EOF;
	if (fputc('\n', stdout)==EOF) return EOF;
	return 0;
}

