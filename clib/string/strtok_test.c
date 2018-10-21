#include <stdio.h>
char* strtok_custom(char* str, const char* delim);

int main(void) {
	char str[]="root:x::0:root:/root:/bin/bash:";
	char* token;

	token=strtok_custom(str, ":");
	printf("%s\n", token);
	while ((token = strtok_custom(NULL, ":"))!=NULL)
		printf("%s\n", token);
	return 0;
}
