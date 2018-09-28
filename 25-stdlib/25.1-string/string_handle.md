# string handle func

`#include <string.h>`

## 1. initial

```c
void* memset(void* s, int c, size_t n);
```

## 2. length

```c
size_t strlen(const char* s);
```

## 3. copy

```c
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, size_t n);
void* memcpy(void* dest, const void* src, size_t n);
void* memmove(void* dest, const void* src, size_t n);
char* strdup(const char* s);	//POSIX
```

## 4. connect

```c
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, size_t n);
```

## 5. compare

```c
int memcmp(const void* s1, const void* s2, size_t n);
int strcmp(const char* s1, const char* s2);
int strncmp(const char* s1, const char* s2, size_t n);
/* POSIX */
int strcasecmp(const char* s1, const char* s2);
int strncasecmp(const char* s1, const char* s2, size_t n);
```

## 6. search

```c
char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);
char* strstr(const char* haystack, const char* needle);
```

## 7. split

```c
char* strtok(char* str, const char* delim);
char* strtok_r(char* str, const char* delim, char** saveptr);	//POSIX
```

