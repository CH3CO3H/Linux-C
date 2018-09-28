char* strtok_custom(char* str, const char* delim) {
	static char* pos;
	char* r;
	if (str) {
		pos=str;
	}
	if (!pos) return (char*)0;
	r=pos;
	while (*pos!=*delim) {
		pos++;
	}
	*pos='\0';
	while (*++pos==*delim) {
		*pos='\0';
	}
	return r;
}
